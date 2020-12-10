#include<memory>
#include"person.h"

Person::Person(const std::string& name, int age)
{
	this->name = name;
	this->age = age;
}
//constructors for human and its derrived classes
Human::Human(const std::string &inName,int inAge)
{
    name = inName;
    age = inAge;
}
HighschoolStudent::HighschoolStudent(const std::string &inName, int inAge, char inGrade):Human(inName,inAge)
{
    name = inName;
    age = inAge;
    grade = inGrade;
}
Teacher::Teacher(const std::string &inName,int inAge, const std::string &inSubject):Human(inName,inAge)
{
    name = inName;
    age = inAge;
    subject = inSubject;
}
//implementation of the different versions of the print information
void Human::PrintInfo()
{
    std::cout << name<<" "<<std::to_string(age)<<"\n";
}
void HighschoolStudent::PrintInfo()
{
    std::cout << name << " " << std::to_string(age) <<" "<< grade << "\n";
}
void Teacher::PrintInfo()
{
    std::cout << name << " " << std::to_string(age) <<" "<< subject << "\n";
}
//personhandler related classes
void PersonHandler::GenerateHumans()
{
    std::shared_ptr<HighschoolStudent> Sam = std::make_shared<HighschoolStudent>("Sam", 15, 'B');
    std::shared_ptr<HighschoolStudent> Sara = std::make_shared<HighschoolStudent>("Sara", 16, 'C');
    std::shared_ptr<HighschoolStudent> Bernard = std::make_shared<HighschoolStudent>("Bernard", 15, 'E');
    std::shared_ptr<HighschoolStudent> Lina = std::make_shared<HighschoolStudent>("Lina", 15, 'A');
    std::shared_ptr<HighschoolStudent> Terry = std::make_shared<HighschoolStudent>("Terry", 16, 'D');
    std::shared_ptr<HighschoolStudent> Abby = std::make_shared<HighschoolStudent>("Abby", 16, 'F');
    std::shared_ptr<Teacher> Miriam = std::make_shared<Teacher>("Miriam", 34, "English");
    std::vector<std::shared_ptr<Human>> humans{Sam, Sara, Bernard, Lina, Terry, Abby, Miriam};
    for (int i = 0; i < humans.size(); i++)
        humans[i]->PrintInfo();
}
 void PersonHandler:: CreatePersonsAndFindOlder()
 {
     std::vector<Person> peopleList;
     peopleList.push_back(Person("Bob", 45));
     peopleList.push_back(Person("Fanny", 38));
     peopleList.push_back(Person("Abrecombie", 56));
     peopleList.push_back(Person("Tom", 26));
     peopleList.push_back(Person("Samantha", 18));
     peopleList.push_back(Person("Julie",29));

     const Person* oldestPerson = FindOldest(peopleList);

     if (oldestPerson != nullptr)
         std::cout << "\n" << "The oldest person in the list is " << oldestPerson->name<<" who are "<< oldestPerson->age<<" Years old";
     else
         std::cout << "\n" << "oldestPerson is pointing to an invalid refence, please make sure you are not trying to use an empty reference.";
 }
const Person* PersonHandler::FindOldest(const std::vector<Person>& people)
{
    if (people.size() == 0)
        return nullptr;
    const Person* oldest = &people[0];
    for(int i = 1; i<people.size();i++)
    {
        if (people[i].age > oldest->age)
            oldest = &people[i];
    }
    return oldest;
}
