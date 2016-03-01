/**************************************************************************************
** Program: Book.cpp
** Author: Edwin Rubio
** Description: Book.cpp is the Item class function implementation file.
***************************************************************************************/
#include <string>
#include <cstdlib>
#include "Book.hpp"

using namespace std;

class Patron;

Book::Book(string idc, string t, string a)//default constructor
{
	idCode = idc;
	title = t;
	author = a;
	checkedOutBy = NULL;
	requestedBy = NULL;
	location = ON_SHELF;
}

int Book::getCheckOutLength()//returns the constant
{
	return CHECK_OUT_LENGTH;
}

string Book::getIdCode()//gets book id
{
	return idCode;
}

string Book::getTitle()//gets book title
{
	return title;
}

string Book::getAuthor()//gets authors name
{
	return author;
}

Locale Book::getLocation()//gets book location
{
	return location;
}

void Book::setLocation(Locale loc)//sets to see if the book is in the shelf, not on shelf, or on hold. 
{
	location = loc;
}

Patron* Book::getCheckedOutBy()//gets patron who checked it out 
{
	return checkedOutBy;
}

void Book::setCheckedOutBy(Patron* by)//sets patron who checked it out
{
	checkedOutBy = by;
}

Patron* Book::getRequestedBy()//gets requester
{
	return requestedBy;
}

void Book::setRequestedBy(Patron* reBy)//sets the requester
{
	requestedBy = reBy;
}

int Book::getDateCheckedOut()//gets the days of being checked out
{
	return dateCheckedOut;
}

void Book::setDateCheckedOut(int date)//sets the check out dates
{
	dateCheckedOut = date;
}
