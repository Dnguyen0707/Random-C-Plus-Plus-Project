#include "Book.h"


Book::Book()
{
	cout << "Default constructor running" << endl;
	title = "";
	length = 0;
	bookmark = 0;
	author = "";
}

Book::Book(string title, string author)
{
	cout << "title/author constructor running" << endl;
	this->title = title;
	length = 0;
	bookmark = 0;
	this->author = author;
}

string Book::getTitle() const
{
	return title;
}

string Book::getAuthor() const
{
	return string();
}

int Book::getLength() const
{
	return length;
}

int Book::getBookmark() const
{
	return bookmark;
}

bool Book::setTitle(string title)
{
	this->title = title;
	return true;
}

bool Book::setAuthor(string authors)
{
	this->author = authors;
	return true;
}

bool Book::setLength(int length)
{
	if (length < 0)
	{
		return false;
	}
	this->length = length;
	return true;
}

bool Book::setBookmark(int bookmark)
{
	if (bookmark > 0 && bookmark <= length)
	{
		this->bookmark = bookmark;
		return true;
	}
	return false;
}

int Book::TurnPage(int numPage)
{
	setBookmark(bookmark + numPage);
	return bookmark;
}

void Book::PrintDetail(ostream &theStream) const
{
	theStream << "Title: " << getTitle() << endl;
	theStream << "Author: " << getAuthor() << endl;
	theStream << "Lenght: " << getLength() << endl;
	theStream << "Bookmark: " << getBookmark() << endl;
}

bool Book::equal(const Book& rhsBook)
{
	if ((title == rhsBook.getTitle() && author == rhsBook.getAuthor()))
	{
		return true;
	}
	else
	{
		return false;
	}

}