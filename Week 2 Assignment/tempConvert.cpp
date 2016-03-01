/*************************************************************
** Program: tempConvert.cpp
** Author: Edwin Rubio
** Description: Converts Celsius to Fahrenheit
** Input: Celsius temperature
** Output: Fahrenheit temperature
**************************************************************/

#include <iostream>
using namespace std; 

int main()
{
	float fahrenheit = 0;
	float celsius = 0;
	
	cout << "Please enter a Celsius temperature." << endl;
	cin >> celsius;
	fahrenheit = ((9.0/5.0) * celsius) + 32;
	cout << fahrenheit << endl; 

	return 0;
} 
