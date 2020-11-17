#include<iostream>
#include"songdatabase.h"

void AddAndReadSongTitles()
{
	std::cout << "I was called";	
	songs.push_back(Song("Jolene", "Dolly Parton"));
	songs.push_back(Song("Imagine", "John Lennon"));
	songs.push_back(Song("Let it be", "The Beatles"));
	songs.push_back(Song("I will always love you", "Dolly Parton"));
	songs.push_back(Song("Yellow submarine", "The Beatles"));

	for(int i = 0;i<songs.size()-1; i++)
	{
		std::cout << "\n" << songs[i].songTitle << "by "<<songs[i].songArtist<<"\n";
	}

}
