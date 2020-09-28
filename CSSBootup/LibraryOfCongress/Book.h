#pragma once
#include <string>
#include <iostream>
using namespace std;


//.h define what a class does

class Book
{
public:
	//getter setter
	Book();
	Book(string title, string author);

	string getTitle() const;
	string getAuthor() const;
	int getLength() const;
	int getBookmark() const;

	bool setTitle(string title);
	bool setAuthor(string authors);
	bool setLength(int length);
	bool setBookmark(int bookmark);


	int TurnPage(int numPage);
	void PrintDetail(ostream &theStream) const;
	bool equal(const Book& rhsBook);

private:
	string title;
	string author;
	int length;
	int bookmark;
};

