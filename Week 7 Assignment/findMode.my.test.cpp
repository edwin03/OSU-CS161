/**************************************************************************************
** Program: findMode.hpp
** Author: Edwin Rubio
** Description: 
***************************************************************************************/

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <set>
using namespace std;

/*The mode is the value that appears most often in a set of data.Write a function named findMode that takes as parameters an array of ints and the size of the array, and returns a vector containing the mode(s).

If there is just a single mode, the vector will only contain that one value, but if multiple values tie, the vector will need to contain all of the modes.  This includes the case where every number in the array appears only once.  
Each mode should appear only once in the vector.   The values in the vector that is returned must be in ascending order.  Depending on your algorithm, it may be easier (though less efficient) to just sort the vector at the end before returning it.  
Sorting a vector is similar to sorting an array, but specifying the beginning and end of the vector look a little bit different.  If your vector is named result, then it would look like this: "std::sort(result.begin(), result.end());".  
Don't alter the original array.

The most straightforward approach is to:

Iterate (loop) through the array to find out what the highest frequency for any value is without worrying about storing any such values.
Iterate through the array again, this time comparing the counts for each value to the highest frequency that you already found, if the count for a value is the same as the highest frequency, push that value into your results vector.
The file must be named: findMode.cpp*/

vector<int> findMode(int arr[], int arr_size)
{
	int temp = 0;
	int count = 1;
	int tempCount, popular;
	int previousInsert[arr_size];
	vector<int> mode;
	vector<int> results;



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
			popular = temp;
			count = tempCount;
		}
	}

	//cout << "Highest Frequency: " << count << endl;
	//cout << "mode: " << popular << endl;
	
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

	set<int> s;
	unsigned size = mode.size();
	for (unsigned i = 0; i < size; ++i)
	{
		s.insert(mode[i]);
	}
	mode.assign(s.begin(), s.end());

	return (mode); 

	//sort(mode.begin(), mode.end());

	//for (int i = 0; i < mode.size() - 1; i++)
	//{
		//if (mode[i] == mode[i + 1])
		//{
			//mode.pop_back();
			//i--;
		//}
	//}

	//for (int i = 0; i < mode.size() - 1; i++) {
		//if (mode[i] == mode[i + 1]) {
			//mode.erase(mode.at(i))
		//		i--;
		//}
	//}

	//////////////////////////////////////////////////////////////////


	//for (int index = 0; index < mode.size(); index++)
	//cout << " Mode Array " << mode[index] << endl;
	
	/*cout << endl;

	for (int s = 0; s < mode.size(); s++)
	{
		int counter2 = 0;

		for (int d = 0; d < mode.size(); d++)
		{
			cout << mode.at(s) << " compare " << mode.at(d) << endl;

			if (mode.at(s) == mode.at(d))
			{
				cout << "duplicate" << endl;
				counter2++;
			}
			if (counter2 == count)
			{
				cout << " Add to Vector: " << mode.at(s) << endl;
				results.push_back(mode.at(s));
				counter2 = mode.size();
			}
		}

	}*/

		//results.push_back(mode.at(s));


	//for (int index = 0; index < results.size(); index++)
		//cout << "Results Array " << results[index] << endl;;

	//add to vector






	/*mode.push_back(popular);
	cout << "mode size: " << mode.size() << endl;
	int counter2, temp2;

	for (int k = 0; k < mode.size(); k++)
	{
		counter2 = 0;
		temp2 = mode.at(k);

		for (int q = 0; q < mode.size(); q++)
		{
			if (temp2 == mode.at(q))
			{
				counter2++;
			}
		}
	}
	counter2 = 0;
	cout << counter2 << endl;

	if (counter2 == 0)
	{
			mode.push_back(temp2);
	}

//}

	for (int b = 0; b < mode.size(); b++)
	{
		cout << "vector modes: " << mode.at(b) << endl;
	}
	
	

	//previousInsert[0] = 0;

	//for (int i = 0; i < arr_size; i++)
	//{
		//temp = arr[i];
		//tempCount = 0;
		//int counter2 = 0;

		//for (int j = 0; j < arr_size; j++)
	//	{
		//	if (temp == arr[j])
			//	tempCount++;
	//
		//	if (temp != previousInsert[j])
			//	cout << "mode " << temp << " " << endl;

		//	mode.push_back(temp);
		//}

		//cout << temp << endl;

		/*if (tempCount == count)
		{
		for (int h = 0; h < arr_size; h++)
		{

		int temp2 = mode.at(h);

		for (int q = 0; q < arr_size; q++)
		{
		if (temp2 == mode.at(q))
		{
		cout << "there exist: " << temp << "in the vector! do not add to vector!" << endl;
		counter2++;
		}
		}

		if (counter2 == 0)
		mode.push_back(temp);
		}*/

		//previousInsert[j] = temp;*/
	}
//}

	//for (int index = 0; index < mode.size(); index++)
		//cout << mode[index] << " ";
//}

/*int main()
{
	int size = 10;

	int myArray[] = {5, 1, 33, 33, 33, 5, 5, 10, 10, 10}; 

	findMode(myArray, size); 

	cout << endl;

	return 0;

}*/

