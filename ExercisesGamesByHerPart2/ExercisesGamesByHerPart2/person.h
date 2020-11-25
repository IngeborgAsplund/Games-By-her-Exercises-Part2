#pragma once
#include <iostream>
#include<string>
#include<vector>

struct Person
{
	std::string name;
	int age;
	Person(const std::string& name, int age);

};
class PersonHandler
{
public:
	void CreatePersonsAndFindOlder();
private:
	const Person* FindOldest( const std::vector<Person>& people);
};