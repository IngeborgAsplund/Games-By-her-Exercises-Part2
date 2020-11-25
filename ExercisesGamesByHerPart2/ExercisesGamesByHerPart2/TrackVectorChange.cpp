#include<iostream>
#include"trackVectorChange.h"
///Visualizes when the vector of numbers are rezised printing out wich items are affected and what the new adress is.
void TrackVectorChange::AddItemsAndTrackChanges()
{
	int* itemptr = nullptr;
	for(int i = 0; i<1000;i++)
	{
		if (numbers.data() != itemptr)
		{
			itemptr = numbers.data();
			std::cout << "\n" << "numbers vector rezizd for item " << i<<"new adress is " << itemptr;
		}
		numbers.push_back(i);
	}
}