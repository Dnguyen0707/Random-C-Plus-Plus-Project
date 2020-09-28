#include "BookShelf.h"


int BookShelf::getCount() const
{
	return count;
}

bool BookShelf::AddBook(const Book& book)
{
	int i = 0;
	if (count == maxBook)
	{
		return false;
	}
	while (books[i].getTitle() != "")
	{
		i++;
	}

	books[i] = book;
	count++;
	return true;
}

Book BookShelf::RemoveBook(const Book& book)
{
	Book retBook;
	int location = Location(book);
	if (location != -1)
	{
		Book emptyBook;
		retBook = books[location];
		count--;
	}
	return retBook;
}

bool BookShelf::Contains(const Book& book)
{
	if (Location(book) != -1)
	{
		return true;
	}
	return false;
}

int BookShelf::Location(const Book& book)
{
	for (int i = 0; i < maxBook; i++)
	{
		if (books[i].equal(book))
		{
			return i;
		}
	}
	return -1;
}

void BookShelf::PrintDetails(ostream& theStream) const
{
	for (int i = 0; i < maxBook; i++)
	{
		if (books[i].getTitle() != "")
		{
			books[i].PrintDetail(theStream);
		}
	}
}



