/**************************************************************************************
** Program: ShoppingCart.cpp
** Author: Edwin Rubio
** Description: ShoppingCart.cpp is the Item class function implementation file.
***************************************************************************************/

#include "ShoppingCart.hpp" //This brings in the ShoppingCart.hpp class specification file. 

ShoppingCart::ShoppingCart() //Default constructor that sets all items in the array to NULL, and sets arrayEnd to 0. 
{
	Item *itemArray[MAX] = { NULL };
	arrayEnd = 0;
	
}

void ShoppingCart::addItem(Item *ptr) //It takes an Item pointer and adds it ot he array and updates arrayEnd. 
{
	itemArray[arrayEnd] = ptr;
	arrayEnd++;
}

double ShoppingCart::totalPrice() //Returns the total cost of all items in the itemArray by multiplying the price and quantity together.
{
	double sum = 0.0;

	for (int count = 0; count < arrayEnd; count++)
	{
		sum += (*itemArray[count]).getPrice() * (*itemArray[count]).getQuantity();
	}

	return sum;
}
