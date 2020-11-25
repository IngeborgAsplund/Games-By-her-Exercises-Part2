#pragma once
#include<vector>
//class containing a vector filled with ints and a method that prepetually adds items to the list via a loop printing out when the
//list rezizes and at what adress it does rezize(should be at the first object in the list)
class TrackVectorChange 
{
public:
	//function that prepetually add items to vector and checks when it is changed
	void AddItemsAndTrackChanges();
private:
	//vector numbers.
	std::vector<int> numbers;
};