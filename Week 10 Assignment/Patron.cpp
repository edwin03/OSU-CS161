/**************************************************************************************
** Program: Patron.cpp
** Author: Edwin Rubio
** Description: patron.cpp is the Item class function implementation file.
***************************************************************************************/
#include <string>
#include <vector>
#include <cstdlib>
#include "Patron.hpp"

using namespace std;

//class LibraryItem;

Patron::Patron(string idn, string n)//default constructor
{
	idNum = idn;
	name = n;
	fineAmount = 0.00;
	checkedOutBooks.reserve(100);
}

string Patron::getIdNum()//gets patron id
{
	return idNum;
}

string Patron::getName()//gets patron name 
{
	return name;
}

vector<Book*> Patron::getCheckedOutBooks()//sends back patron checked out books.
{
	return checkedOutBooks;
}

void Patron::addBook(Book* b)//adds books to vector
{
	checkedOutBooks.push_back(b);
}

void Patron::removeBook(Book* b)//removes book from vector
{
	for (int i = 0; i < checkedOutBooks.size(); i++)
	{
		if (b == checkedOutBooks.at(i))
		{
			checkedOutBooks.erase(checkedOutBooks.begin() + i);
			return;
		}
		else
		{
			continue;
		}
	}
}

double Patron::getFineAmount()//returns fine amount
{
	return fineAmount;
}

void Patron::amendFine(double amount)//calculates fine amount
{
	fineAmount += amount;
}
