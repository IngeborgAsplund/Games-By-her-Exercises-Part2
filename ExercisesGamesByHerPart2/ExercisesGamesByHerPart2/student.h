#pragma once
#include<iostream>
#include<string>
#include<vector>

class Student
{
	public:
		//name of student
		std::string name;
		//add a score to std vector<int> testScores
		void AddTestScore(int score);
		//calculate the avarage scores based on the added scores
		float AverageScore();		
	private:
		std::vector<int>testScores;
};