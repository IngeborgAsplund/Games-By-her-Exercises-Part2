#pragma once
#include<iostream>
#include<vector>
#include<string>
struct Song {
	std::string songTitle;
	std::string songArtist;
	Song(std::string title, std::string artist)
	{
		songTitle = title;
		songArtist = artist;
	}
};

