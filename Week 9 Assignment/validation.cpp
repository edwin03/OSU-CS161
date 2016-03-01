/****************************************************************************************
** Program: validation.cpp
** Author: Edwin Rubio
** Description: This file contains two functions "stringIsInt" and "stringIsFloat" which
** verifies if the user's input is a valid float or integer value by returning a Boolean
** value.
*****************************************************************************************/
#include<iostream>
#include<string>
#include<cstdlib>

using namespace std; 

bool stringIsInt(string input)
{
	int i = 0;

	//This checks to see if the string is empty, if so it returns false.
	if (input.empty())
		return false;

	//This for loop checks to see if there are any unwanted characters. 
	for (i = 0; i < input.size(); i++)
	{
		if (input[i] != '+' && input[i] != '-' && input[i] != ' ' && !isdigit(input[i]))
			return false;
		i++;
	}

	//This for loop will go over the characters to see if they are following the correct input format. 
	for (i = 0; i < input.size(); i++)
	{
		//Check for spaces, if so move the pointer to check the next character.
		while (input[i] == ' ')
			i++;

		//Check to see if there is any polarity symbol
		if (input[i] == '+' || input[i] == '-')
		{
			//This will check to see if the polarity symbol is at the end, if so it returns false. 
			if ((i + 1) == input.size())
				return false;

			i++;

			//Check to see if the next array space is a symbol, if it is then return false.
			if (input[i] == '+' || input[i] == '-')
			{
				return false;
			}
		}

		//Check again for spaces
		while (input[i] == ' ')
			i++;

		//Check to see if the next character is an integer. 
		while (isdigit(input[i]))
		{
			i++;
		}

		//Check again to see if there is spaces.
		while (input[i] == ' ')
			i++;

		//Check if there is another polarity symbol and/or another digit after a space, if so then return false.
		if (input[i] == '+' || input[i] == '-' || input[i] == '.' || isdigit(input[i]))
		{
			return false;
		}

	}

	//If the for loop finished successfully without sending back a false, then the value is true. 
	return true;
}

bool stringIsFloat(string input)
{
	int i = 0;
	//This variable will help determine if there two decimals. 
	int pcounter = 0; 

	//This checks to see if the string is empty, if so it returns false.
	if (input.empty())
		return false;

	//This for loop checks to see if there are any unwanted characters. 
	for (i = 0; i < input.size(); i++)
	{
		if (input[i] != '+' && input[i] != '-' && input[i] != ' ' && !isdigit(input[i]))
			return false;

		i++;
	}

	//This for loop will go over the characters to see if they are following the correct input format. 
	for (i = 0; i < input.size(); i++)
	{
		//Check for beginning spaces or decimal
		while (input[i] == ' ' || input[i] == '.')
		{
			//If it was a decimal it will increase the deciaml counter.
			if (input[i] == '.')
				pcounter++;

			//If the pcounter has been set to two then it will return false since there cannot be two deciamals.
			if (pcounter == 2)
				return false;
			
			//This will determine if there is a space after a decimal point, if so it will send false back. 
			if (input[i] == '.' && input[i + 1] == ' ')
				return false;

			i++;
		}

		//Check to see if there is any polarity symbol
		if (input[i] == '+' || input[i] == '-')
		{
			//This will check to see if the polarity symbol is at the end, if so it returns false.
			if ((i + 1) == input.size())
				return false;
			i++;

			//Check to see if the next array space is a symbol, if it is then retuen false.
			if (input[i] == '+' || input[i] == '-')
			{
				return false;
			}
		}

		//Check for spaces
		while (input[i] == ' ')
		{
			i++;
		}

		//Check to see if there is any polarity symbol
		if (input[i] == '+' || input[i] == '-')
		{
				return false;
		}

		//Check for decimal
		if (input[i] == '.')
		{
			i++;
			//check again to see if the next char is a deciaml, if so then return false.
			if (input[i] == '.' || input[i] == ' ')
				return false;
		}

		//Check to see if the next character is a decimal.
		while (isdigit(input[i]))
		{
			i++;
		}

		//Check for decimal point again. 
		if (input[i] == '.')
		{
			//if deciaml point is at the end then return false.
			if ((i+1) == input.size())
				return false;

			//Retruns false if the next character is a period or space.
			i++;
			if (input[i] == '.' || input[i] == ' ')
				return false;
		}

		//Check again for spaces
		while (input[i] == ' ')
		{
			i++;

			//If the next character mataches whats below, then it does not follow syntax and it will return false. 
			if (isdigit(input[i]) || input[i] == '.' || input[i] == '+' || input[i] == '-')
				return false;
		}

		//Check to see if the next character is a decimal. 
		while (isdigit(input[i]))
		{
			i++;
		}

		//Checks to see if the rest if spaces. 
		while (input[i] == ' ')
			i++;

	}

	//If the for loop finished successfully without sending back a false, then the value is true. 
	return true;
}
