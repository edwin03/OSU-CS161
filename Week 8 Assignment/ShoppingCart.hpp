/*****************************************************************************
** Program: ShoppingCart.hpp
** Author: Edwin Rubio
** Description: ShoppingCart.hpp is the ShoppingCart Class specification file.
******************************************************************************/

#include "Item.hpp" //Brings in the Item.pp specification file. 
#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP

class ShoppingCart
{
private:
	static const int MAX = 100; // Max number of pointer Items. 
	Item *itemArray[MAX]; //A pointer that points to Item data types.
	int arrayEnd; //Keeps counter of how many pointer Items there is in the itemArray. 

public:
	ShoppingCart(); //Initialzes the array to all NULL and arrayEnd to 0.
	void addItem(Item *ptr); //It takes an Item pointer and adds it to the array and updates arrayEnd. 
	double totalPrice(); //Returns the total cost of all items in the ShoppingCart (price x quantity).

};
#endif