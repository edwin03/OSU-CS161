/******************************************************************
** Program: hailstone.cpp
** Author: Edwin Rubio
** Description: Determines how many steps does it take to get to 1. 
** Input: Integer number
** Ouput: Prompt the user how many steps it took to get to 1.
******************************************************************/

#include <iostream>
using namespace std;

int hailstone (int x ) {

  int result = 0; // This will help us determine if the user input is an integer or character.  
  int  counter = 0; // This counter will count how many steps does it take to get to 1. 

while (x != 1){
	do {
		result = x % 2;

		if (result == 0) {
			x = x/2;
			counter++;
			}

		else {
			x = (x*3) + 1;
			counter++;
			}

		} while (x != 1);

	}

  return counter;

} 

/*int main () {
  int counts = 0;
  int num = 0;

  cout << "Enter Number: " << endl;
  cin >> num;

  counts =  hailstone (num); 
	
  cout << "number: " << counts << endl;

  return 0;
}*/
