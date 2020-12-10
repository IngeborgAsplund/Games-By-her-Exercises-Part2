#include"animal.h"
void Animal::MakeSound()
{
	std::cout <<name<< " the unknown animal says something\n";
}
void Dog::MakeSound()
{
	std::cout <<name<<" the "<<breed<<" says woof\n";
}
void Cat::MakeSound()
{
	std::cout << name<<" the "<<furcolor<<" cat says Meow\n";
}
void Hen::MakeSound()
{
	std::cout << name << " the hen says " << "kakakaka kluck\n";
}
void Cow::MakeSound()
{
	std::cout << name << name << " the " << pattern << " cow says Moo.\n";
}
