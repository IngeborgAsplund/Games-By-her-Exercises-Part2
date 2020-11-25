#include"person.h"

Person::Person(const std::string& name, int age)
{
	this->name = name;
	this->age = age;
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
