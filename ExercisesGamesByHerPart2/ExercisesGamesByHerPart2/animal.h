#pragma once
#include<string>
#include<iostream>
struct Animal
{
    std::string name;
	virtual void MakeSound() = 0;
};
struct Dog:Animal
{
	std::string breed;
	void MakeSound() override;
};
struct Cat:public Animal
{	
	std::string furcolor;
	void MakeSound() override;
};
struct Hen:public Animal
{
	void MakeSound()override;
};
struct Cow:public Animal
{
	std::string pattern;
	void MakeSound()override;
};
struct Fox:public Animal
{
	void MakeSound()override;
};


