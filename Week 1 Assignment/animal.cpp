/***************************************************************
** Program: animal.cpp
** Author: Edwin Rubio
** Description: Records amd prints out user's favorite animal.
** Input: Favorite animal
** Output: Prints user's favorite animal to console screen.  
***************************************************************/

#include <iostream>
#include <string>

// A simple example program
int main ()
{
	std::string faveAnimal; 
	std::cout << "Please enter your favorite animal." << std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the " << faveAnimal;
	std::cout << "." << std::endl;

	return 0;
}

