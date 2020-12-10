#pragma once
#include <iostream>
#include<string>
#include<vector>
//struct person for the implemention of functionality 3.
struct Person
{
	Person(const std::string& name, int age);
	std::string name;
	int age;

};
//class version of the above struct it will work as the base class for several derriving objects. It do not have anything to do with
//the above person struct nor with the functionality of exercise 3
class Human
{
public:
	Human(const std::string &inName, int inAge);
	virtual void PrintInfo() = 0;
protected:
	std::string name;
	int age;
};
//class deriving directly from Human
class HighschoolStudent:public Human 
{
public:
	HighschoolStudent(const std::string &inName, int inAge, char inGrade);
	void PrintInfo()override;
protected:
	char grade;
};
//class derriving from human
class Teacher: public Human
{
public:
	Teacher(const std::string &inName, int inAge, const std::string &inSubject);
	void PrintInfo()override;
protected:
	std::string subject;
};

class PersonHandler
{
public:
	void CreatePersonsAndFindOlder();
	void GenerateHumans();// we now generate humans of different kind of people using human as base
private:
	const Person* FindOldest( const std::vector<Person>& people);
};