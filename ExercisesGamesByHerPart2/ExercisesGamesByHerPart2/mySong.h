#pragma once
#include<string>
#include<iostream>
#include<vector>
struct Song {
	std::string songTitle;
	std::string songArtist;
	Song(const std::string& title, const std::string& artist);
}; 
class SondDataBase 
{
public:
	void Initialize();
	const Song* FindOne(const std::string& title);
	std::vector<Song*> FindSongsByArtist(const std::string& artist);
private:
	std::vector<Song> songDataBase;
};
