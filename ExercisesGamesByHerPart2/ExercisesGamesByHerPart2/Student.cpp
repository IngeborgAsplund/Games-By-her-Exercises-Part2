#include"student.h"

void Student::AddTestScore(int score)
{
	testScores.push_back(score);
}
float Student::AverageScore()
{
	int totalScore = 0;
	for(int i = 0; i<testScores.size()-1;i++)
	{
		totalScore += testScores[i];
	}
	float average = totalScore / testScores.size();
	return average;
}