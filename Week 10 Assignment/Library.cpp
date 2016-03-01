/**************************************************************************************
** Program: Library.cpp
** Author: Edwin Rubio
** Description: Library.cpp is the Item class function implementation file.
***************************************************************************************/
#include <string>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "Patron.hpp"
#include "Library.hpp"

using namespace std;

Library::Library()//Default constructor
{
	holdings.reserve(100);
	members.reserve(100);
	currentDate = 0;
}

void Library::addBook(Book* bok)//stores pointer to Book bok to holdings vector
{
	holdings.push_back(bok);
}

void Library::addPatron(Patron* pat)//stores pointer to Patron bok to members vector
{
	members.push_back(pat);
}

string Library::checkOutBook(string pID, string bID)//receives patron ID and book ID, to try to checkout book. 
{
	Book* book = getBook(bID);
	Patron* patron = getPatron(pID);

	if (book == NULL || patron == NULL)
	{
		if (book == NULL)
		{
			return "book not found";
		}
		if (patron == NULL)
		{
			return "patron not found";
		}
	}

	if (book->getLocation() == CHECKED_OUT)
	{
		return "book already checked out";
	}
	else if (book->getLocation() == ON_HOLD_SHELF)
	{
		if (book->getRequestedBy()->getIdNum() == patron->getIdNum())
		{
			book->setLocation(CHECKED_OUT);
			book->setCheckedOutBy(getPatron(pID));
			book->setDateCheckedOut(currentDate);
			book->setRequestedBy(NULL);
			patron->addBook(book);
		}
		else
		{
			return "book on hold by other patron";
		}
	}
	else
	{
		book->setLocation(CHECKED_OUT);
		book->setCheckedOutBy(patron);
		book->setDateCheckedOut(currentDate);
		patron->addBook(book);
		return "check out successful";
	}

}

string Library::returnBook(string bID)//Retrun book to shelf
{
	Book* book = getBook(bID);

	if (book == NULL)
	{
		return "book not found";
	}
	if (book->getLocation() == ON_SHELF)
	{
		return "book already in library";
	}

	else
	{
		Patron* patron = book->getCheckedOutBy();

		if (book->getRequestedBy() == NULL)
		{
			book->setLocation(ON_SHELF);
			book->setCheckedOutBy(NULL);
			book->setDateCheckedOut(-1);
			patron->removeBook(book);
			return "return successful";
		}
		else
		{
			book->setLocation(ON_HOLD_SHELF);
			book->setCheckedOutBy(NULL);
			book->setDateCheckedOut(-1);
			patron->removeBook(book);
		}

		
	}
}

string Library::requestBook(string pID, string bID)//takes out or puts request for book. 
{
	Book* book = getBook(bID);
	Patron* patron = getPatron(pID);

	if (book == NULL || patron == NULL)
	{
		if (book == NULL)
		{
			return "book not found";
		}
		if (patron == NULL)
		{
			return "patron not found";
		}
	}

	if (book->getRequestedBy() == NULL)
	{
		book->setRequestedBy(patron);
		if (book->getLocation() == ON_SHELF)
		{
			book->setLocation(ON_HOLD_SHELF);
		}
		return "request successful";
	}
	else
	{
		return "book on hold by other patron";
	}
}

string Library::payFine(string pID, double payment)//make fine payment. 
{
	Patron* patron = getPatron(pID);

	if (patron == NULL)
	{
		return "patron not found";
	}

	for (int i = 0; i < members.size(); i++)
	{
		if (members.at(i)->getIdNum() == pID)
		{
			members.at(i)->amendFine(-(payment));

			return "payment successful";
		}
	}
}

void Library::incrementCurrentDate()//increments the days. 
{
	currentDate++;

	for (int i = 0; i < members.size(); i++)
	{
		for (int j = 0; j < members.at(i)->getCheckedOutBooks().size(); j++)
		{
			if ((members.at(i)->getCheckedOutBooks().at(j)->getDateCheckedOut() + 21) < currentDate)
			{
				members.at(i)->amendFine(0.1);
			}
		}
	}
}

Patron* Library::getPatron(string pID)//gets patron
{
	for (int i = 0; i < members.size(); i++)
	{
		if (members.at(i)->getIdNum() == pID)
		{
			return members.at(i);
		}
	}

	return NULL;
}

Book* Library::getBook(string bID)//get book
{
	for (int i = 0; i < holdings.size(); i++)
	{
		if (holdings.at(i)->getIdCode() == bID)
		{
			return holdings.at(i);
		}
	}

	return NULL;
}
