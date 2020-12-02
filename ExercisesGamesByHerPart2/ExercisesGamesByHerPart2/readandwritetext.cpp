#include<iostream>
#include"readandwritetext.h"
 //this function create a list of strings that it then write to a file called exercises1.
void ReadAndWrtieText:: WriteToFile()
{
    writeData.push_back("Simon works at a bakery");
    writeData.push_back("his boss is named Mark.");
    writeData.push_back("Mark is a really grumpy man");
    writeData.push_back("with greying brown hair and always furrowed brow.");
    writeData.push_back("Simon was scared of dissapointing mark so even when he made misstakes,");
    writeData.push_back("like when he added to much pepper to the gingerbread cookies,");
    writeData.push_back("he doesn't dare to tell him about it.");
    writeData.push_back("So mark get to know about it from the customers instead.");

    std::ofstream file("exercises1.txt",std::ios::trunc);
    if(file.is_open())
    {
        for (int i = 0; i < writeData.size(); i++)
        {
            file << writeData[i] << "\n";
        }     
        std::cout<<"Writing complete";
        file.close();
    }
    else 
    {
        std::cout << "Unable to ope file";
    }
    
}
//This function reads items from the textfile and places them in a list it then writes to the compiler
void ReadAndWrtieText::ReadFromFile()
{
    std::ifstream file("exercises1.txt");
    std::string line;
    if(file.is_open())
    {
        while(std::getline(file,line))
        {
            readData.push_back(line);
        }
        file.close();
        for (int i = 0; i < readData.size(); i++)
            std::cout << readData[i]<<"\n";
    }
    else
    {
        std::cout << "Couldnt open file";
    }
}
// This function combines the content of the two textfiles exercises1 and continuation1 down to the merger file. The files are
//choosen via user input. Tricky to use since the user must know about the files they want to use.
void ReadAndWrtieText::Merge()
{   
    std::string filename1, filename2, output;
    std::cout << "Type the name of the first file you want to merge, remember to add .txt to the end\n";
    std::cin>> filename1;
    std::cout << "Good enter the name of the second file you want to merge\n";
    std::cin >> filename2;
    std::cout << "Now enter the name of the file you want to write to.\n ";
    std::cin >> output;
    std::ifstream file1(filename1);
    std::ifstream file2(filename2);
    std::ofstream outputFile(output, std::ios::trunc);
    std::string line1;
    std::string line2;
    //check that the files is possible to open
    if(file1.is_open()&&file2.is_open()&&outputFile.is_open())
    {
        while(std::getline(file1,line1))
        {
            outputFile << line1 << "\n";
        }
        while(std::getline(file2,line2))
        {
            outputFile << line2 << "\n";
        }
        std::cout << "Merge complete";
        //closes streams on end of process. I have had the experience that having streams remain open while your app is running is bad practice
        file1.close();
        file2.close();
        outputFile.close();
    }
    else
    {
        std::cout<<"One or several of the files assigned did not exist or was not available.";
    }


}