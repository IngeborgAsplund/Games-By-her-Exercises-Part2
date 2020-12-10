// ExercisesGamesByHerPart2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<vector>
#include"animal.h"
#include"mySong.h"
#include"person.h"
#include"student.h"
#include"shapes.h"
#include"trackVectorChange.h"
#include"readandwritetext.h"
int userInput = 0;
bool finished = false;
SondDataBase album;
PersonHandler people;
TrackVectorChange vectorTest;
ReadAndWrtieText textwriter;

void AddStudents()
{
    Student student1;
    student1.name = "Bob Andersen";
    student1.AddTestScore(20);
    student1.AddTestScore(50);
    student1.AddTestScore(45);

    Student student2;
    student2.name = "Amanda Green";
    student2.AddTestScore(70);
    student2.AddTestScore(90);
    student2.AddTestScore(40);

    std::cout << "\n" << "The average score of " << student1.name << "is " << student1.AverageScore();
    std::cout << "\n" << "The average score of " << student2.name << "is " << student2.AverageScore();
}
//take input from user and create a shape of their choice and output its area to the console
void CreateShape()
{
    std::cout << "What kind of shape do you want to create.\n1.Rectangle\n2.Triangle\n";
    int input;
    double w, h;
    std::cin >> input;
    if (input == 1)
    {
        Rectangle rect;
        std::cout << "Now inpt the width and height for your rectangle\n";
        std::cin >> w;
        std::cin >> h;
        rect.SetWidthAndHeight(w, h);
        std::cout << "Area = " << std::to_string(rect.CalculateArea()) << "\n";
    }
    if (input == 2)
    {
        Triangle tri;
        std::cout << "Now inpt the width and height for your triangle\n";
        std::cin >> w;
        std::cin >> h;
        tri.SetWidthAndHeight(w, h);
        std::cout << "Area " << std::to_string(tri.CalculateArea()) << "\n";
    }
}
void CreateAnimals()
{
    Dog dog1;
    Cat cat1;
    Hen hen1;
    Cow cow1;
    //establish information about cat1 and dog1
    dog1.name = "Bobby"; dog1.breed = "Rotvieler";
    cat1.name = "Missan"; cat1.furcolor ="dark blue";
    hen1.name = "Klara";
    cow1.name = "Malva"; cow1.pattern = "brown spotted";
    Animal* animal = &dog1;
    animal->MakeSound();
    animal = &cat1;
    animal->MakeSound();
    animal = &hen1;
    animal->MakeSound();
    animal = &cow1;
    animal->MakeSound();

}
void mainLoop()
{
    while(!finished)
    {
        std::cout << "\n Welcome to exercises compilation2 input a number between 1 and 11 to run the exercises and 0 to quit" << "\n";
        std::cin >> userInput;  
        switch (userInput)
        {
        case 1:
            album.Initialize();
            break;
        case 2:
            AddStudents();
            break;
        case 3:           
            people.CreatePersonsAndFindOlder();
            break;
        case 4:
            vectorTest.AddItemsAndTrackChanges();
            break;
        case 5:
            textwriter.WriteToFile();
            break;
        case 6:
            textwriter.ReadFromFile();
            break;
        case 7:
            textwriter.Merge();
            break;
        case 8:
            album.ReadSongsFromSource();
            break;
        case 9:
            CreateShape();
            break;
        case 10:
            CreateAnimals();
            break;
        case 11:
            people.GenerateHumans();
            break;
        case 0:
            finished = true;
            break;
        }
    }
}
int main()
{
    mainLoop();
}


