/****************************************************************************
** Program: Library.hpp
** Author: Edwin Rubio
** Description: Library.hpp is the Item Class specification file.
*****************************************************************************/
#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <string>
#include <vector>
#include "Patron.hpp"

using namespace std;

class Library
{
private:
    vector<Book*> holdings;
    vector<Patron*> members;
    int currentDate;
public:
    Library();
    void addBook(Book*);
    void addPatron(Patron*);
    string checkOutBook(string pID, string bID);
    string returnBook(string bID);
    string requestBook(string pID, string bID);
    string payFine(string pID, double payment);
    void incrementCurrentDate();
    Patron* getPatron(string pID);
    Book* getBook(string bID);
};

#endif