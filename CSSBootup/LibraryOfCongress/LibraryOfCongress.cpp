// LibraryOfCongress.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Book.h"
#include "BookShelf.h"
using namespace std;

int main()
{
    cout << "Welcome to the Library of Congress\n";


	Book recentBook, favoriteBook;
	Book scaryBook("IT", "Yeet");
	BookShelf shelfOne;

	recentBook.setTitle("Oregairu");
	recentBook.setAuthor("Wataru");
	recentBook.setLength(300);

	favoriteBook = recentBook;
	recentBook.setTitle("Aobuta");
	recentBook.setAuthor("No idea honestly");
	recentBook.setLength(250);

	shelfOne.AddBook(recentBook);
	shelfOne.AddBook(favoriteBook);
	shelfOne.AddBook(scaryBook);
	shelfOne.PrintDetails(cout);

//	recentBook.TurnPage(10);
//	int currentPage = recentBook.TurnPage(35);
//	cout << "CP: " << currentPage << endl;
//	recentBook.PrintDetail(cout);

//	scaryBook.PrintDetail(cout);
}

