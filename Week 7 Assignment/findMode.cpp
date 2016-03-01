/****************************************************************************************
** Program: findMode.cpp
** Author: Edwin Rubio
** Description: The findMode function finds the value that appears most often in a set 
** of data and it's frquency.The function named takes as parameters an array of ints and
** the size of the array, and returns a vector containing the mode(s). 
*****************************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> findMode(int arr[], int arr_size)
{
	// The beginning of the algorithm to find the highest frequency value (count). 
	int temp = 0;
	int count = 1;
	int tempCount, popular;
	vector<int> mode;

	for (int i = 0; i < arr_size; i++)
	{
		temp = arr[i];
		tempCount = 0;
		for (int j = 0; j < arr_size; j++)
		{
			if (temp == arr[j])
				tempCount++;
		}

		if (tempCount > 1)
		{
			count = tempCount;
		}
	}
	
	// The beginning of the algorithm to find the mode values to placed inside the mode vector.  
	for (int i = 0; i < arr_size; i++)
	{
		temp = arr[i];
		tempCount = 0;
		for (int j = 0; j < arr_size; j++)
		{
			if (temp == arr[j])
				tempCount++;
		}

		if (tempCount == count)
		{
			mode.push_back(temp);
		}
	} 

	// The beginning of the sorting (ascending) and deleting duplicates from the vector mode. 
	set<int> s;
	unsigned size = mode.size();
	for (unsigned i = 0; i < size; ++i)
	{
		s.insert(mode[i]);
	}
	mode.assign(s.begin(), s.end());

	return (mode); 

}

