/****************************************************************************
** Program: Item.hpp
** Author: Edwin Rubio
** Description: Item.hpp is the Item Class specification file.
*****************************************************************************/

#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>

using namespace std;

class Item
{
private: //The private parameter members
	string name; 
	double price;
	int quantity;

public:
	Item(); //Default constructor that sets name to "", price to 0.0, and quantity to 0. 
	Item (string, double, int); //Constructor that sets name, price, and quantity. 
	string getName(); //Returns name 
	void setName(string); //Sets name
	double getPrice(); //Returns price
	void setPrice(double); //Sets price
	int getQuantity(); //Returns quantity
	void setQuantity(int); //Sets quantity

};
#endif



  
  
