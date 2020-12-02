#pragma once
#include<fstream>
#include<string>
#include<vector>
class ReadAndWrtieText
{
public:
	void WriteToFile();	
	void ReadFromFile();
	void Merge();
private:
	std::vector<std::string> writeData;
	std::vector<std::string> readData;
};