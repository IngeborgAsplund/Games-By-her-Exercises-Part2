#include"mySong.h"
Song::Song(const std::string& title, const std::string& artist)
{
    songTitle = title;
    songArtist = artist;
}
//initializing the items in the list of song structs.
void SondDataBase:: Initialize()
{
    
    songDataBase.push_back(Song("Jolene", "Dolly Parton"));
    songDataBase.push_back(Song("Imagine", "John Lennon"));
    songDataBase.push_back(Song("Let it be", "The Beatles"));
    songDataBase.push_back(Song("I will always love you", "Dolly Parton"));
    songDataBase.push_back(Song("Yellow submarine", "The Beatles"));
    songDataBase.push_back(Song("Bridge Over Troubled Waters", "Simon and Garfunkel"));
    songDataBase.push_back(Song("D.I.V.O.R.C-E", "Dolly parton"));
    songDataBase.push_back(Song("Come Togheter", "The Beatles"));
    songDataBase.push_back(Song("The Boxer", "Simon and Garfunkel"));
    songDataBase.push_back(Song("Mummers dance", "Loreena McKennit"));
    
    std::cout << "\n" << "The current content in the album is";

    for (int i = 0; i < songDataBase.size() - 1; i++)
    {
        std::cout << songDataBase[i].songTitle << " by " << songDataBase[i].songArtist << "\n";
    }
    const Song* found = FindOne("I will always love you");
    std::cout << "\n" << "The artist of the song I will always love you is";
    std::cout << "\n" << found->songArtist;

    std::vector<Song*> songsByTheBeatles = FindSongsByArtist("The Beatles");
    std::cout << "\n"<<"The following songs is written and performed by The beatles";
    if(songsByTheBeatles.size()>0)
    {
        for(int k = 0;k<songsByTheBeatles.size();k++)
        {
            if (&songsByTheBeatles[k] != nullptr)
                std::cout << "\n"<< songsByTheBeatles[k]->songTitle;
        }
    }
}
//This function that reads song struct from a textfile, songlibrary extract the information about artist and songname and put them at
//the right places in the songlibrary.
void SondDataBase::ReadSongsFromSource()
{
    std::ifstream readinAlbum("songLibrary.txt");
    std::string line;
    if(readinAlbum.is_open())
    {
        //while we are reading
        while(std::getline(readinAlbum,line))
        {
            int breakIndex = line.find(":");
            if (breakIndex > 0)
            {
                Song song("","");
                std::string title = line.substr(0, breakIndex);
                std::string artist = line.substr(breakIndex+1,line.npos);
                song.songTitle = title;
                song.songArtist = artist;
                songDataBase.push_back(song);
            }
            if (line.empty())
                readinAlbum.ignore();
        }
        std::cout << "Sucessfully read in list\n\n";
        for(int i = 0; i<songDataBase.size();i++)
        {
            std::cout << songDataBase[i].songTitle<<" by "<< songDataBase[i].songArtist << "\n\n";
        }
    }
    else
    {
        std::cout << "File unable to read or already open elsewhere";
    }
}
//find one specific song based on its title
const Song* SondDataBase::FindOne(const std::string& title)
{
   for(int i = 0; i<songDataBase.size();i++)
   {
       if (songDataBase[i].songTitle == title)
           return &songDataBase[i];
   }
    return nullptr;
}

std::vector<Song*> SondDataBase::FindSongsByArtist(const std::string& artist)
{
    std::vector<Song*> songsByArtist;
    for(int i = 0; i<songDataBase.size();i++)
    {
        if(songDataBase[i].songArtist==artist)
        {
            songsByArtist.push_back(&songDataBase[i]);
        }
    }
    return songsByArtist;
}