// ExercisesGamesByHerPart2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<vector>
#include"mySong.h"
#include"student.h"
int userInput = 0;
bool finished = false;

void AddAndReadSongTitles()
{    
    std::vector<Song> songs;
    songs.push_back(Song("Jolene", "Dolly Parton"));
    songs.push_back(Song("Imagine", "John Lennon"));
    songs.push_back(Song("Let it be", "The Beatles"));
    songs.push_back(Song("I will always love you", "Dolly Parton"));
    songs.push_back(Song("Yellow submarine", "The Beatles"));

    for (int i = 0; i < songs.size() - 1; i++)
    {
        std::cout << songs[i].songTitle << " by " << songs[i].songArtist << "\n";
    }

}
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
void mainLoop()
{
    while(!finished)
    {
        std::cout << "\n Welcome to exercises compilation2 input a number between 1 and 2 to run the exercises and 0 to quit" << "\n";
        std::cin >> userInput;  
        switch (userInput)
        {
        case 1:
            AddAndReadSongTitles();
            break;
        case 2:
            AddStudents();
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


