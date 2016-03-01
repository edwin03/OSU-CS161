/**************************************************************************************
** Program: Item.cpp
** Author: Edwin Rubio
** Description: Item.cpp is the Item class function implementation file.
***************************************************************************************/

#include "Item.hpp" //This brings in the Item.hpp class specification file. 
#include <string>

using namespace std;

Item::Item() //Default constructor that sets name to "", price to 0.0, and quantity to 0. 
{
	name = "";
	price = 0.0;
	quantity = 0;

}

Item::Item(string name, double price, int quantity) //Constructor that sets name, price, and quantity.
{
	setName(name);
	setPrice(price);
	setQuantity(quantity);
}

string Item::getName() //Returns name
{
	return name;
}

void Item::setName(string name2) //Sets name
{
	name = name2;
}

double Item::getPrice() //Returns price
{
	return price;
}

void Item::setPrice(double price2) //Sets price
{
	price = price2;
}

int Item::getQuantity() //Returns quantity
{
	return quantity;
}

void Item::setQuantity(int quant) //Sets quantity
{
	quantity = quant;
}