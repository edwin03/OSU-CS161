/****************************************************************************
** Program: Patron.hpp
** Author: Edwin Rubio
** Description: Patron.hpp is the Item Class specification file.
*****************************************************************************/
#ifndef PATRON_HPP
#define PATRON_HPP

#include <string>
#include <vector>
#include <stdio.h>
#include "Book.hpp"

using namespace std;

//class LibraryItem;

class Patron
{
private:
    string idNum;
    string name;
    vector<Book*> checkedOutBooks;
    double fineAmount;
public:
    Patron(string idn, string n);
    string getIdNum();
    string getName();
    vector<Book*> getCheckedOutBooks();
    void addBook(Book* b);
    void removeBook(Book* b);
    double getFineAmount();
    void amendFine(double amount);
};

#endif