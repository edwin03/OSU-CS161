/***********************************************************
** Program: numGuess.cpp
** Author: Edwin Rubio
** Description: Number guess game. 
** Input: Guessing numbers
** Ouput: Prompt the user they guessed it correctly string.
***********************************************************/

#include <iostream>
using namespace std;

int main () 
{
  int numEntered;  
  int numGuess;
  int tries = 0;

  cout << "Enter the number for the player to guess." << endl;
  cin >> numEntered;

do 
{
  cout << "Enter your guess." << endl;
  cin >> numGuess;
  tries++;
 
  if (numGuess > numEntered)
    {
	cout << "lower" << endl;
    }

  if (numGuess < numEntered)
    {
	cout << "higher" << endl;
    }
  if (numGuess == numEntered)
    {
	cout << "You guessed it in " << tries << " tries." << endl;
    }
}while (numEntered != numGuess);

	return 0;

}
 
