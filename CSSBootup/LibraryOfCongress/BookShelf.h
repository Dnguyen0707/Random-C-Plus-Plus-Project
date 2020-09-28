#pragma once
#include "Book.h"
const int maxBook = 100;

class BookShelf
{
public:
	int getCount() const;
	bool AddBook(const Book& book);
	Book RemoveBook(const Book& book);
	bool Contains(const Book& book);
	int Location(const Book& book);
	void PrintDetails(ostream& theStream) const;


private:
	Book books[maxBook];
	int count = 0;
};

