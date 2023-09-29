#include "Library.h"


void Library::addBook(Book* book)
{
	books.push_back(book);
	cout << "The book added succesfully.\n";
}


void Library::removeBook(Book* book)
{
	for (int i = 0; i < books.size(); i++)
	{
		if (books[i]->getName() == book->getName()
			&& books[i]->getAuthor() == book->getAuthor()
			&& books[i]->getPublicationYear() == book->getPublicationYear())
		{
			books.erase(books.begin() + i);
			cout << "The book was successfully removed from library!\n\n";
			return;
		}
	}
	cout << "This book isn't in library!\n\n";
	return;
}


void Library::giveBook(Book* book)
{
	for (int i = 0; i < books.size(); i++)
	{
		if (books[i]->getName() == book->getName()
			&& books[i]->getAuthor() == book->getAuthor()
			&& books[i]->getPublicationYear() == book->getPublicationYear())
		{
			if (books[i]->getIsInStock() == true)
			{ 
				cout << "\tYour Book:\n\n";

				cout << "\tName of the book: " << books[i]->getName();
				cout << "\n\tAuthor of \"" << books[i]->getName() << "\" is: " << books[i]->getAuthor();
				cout << "\n\tYear of publication: " << books[i]->getPublicationYear() << "\n\n";
				books[i]->setIsNotInStock();
								
				return;
			}
			else 
			{
				cout << "This book isn't in stock!\n\n";
				return;
			}
		}
	}
	cout << "This book isn't in library!\n\n";
	return;
}

void Library::returnByStudentBook(Book* book)
{
	for (int i = 0; i < books.size(); i++)
	{
		if (books[i]->getName() == book->getName()
			&& books[i]->getAuthor() == book->getAuthor()
			&& books[i]->getPublicationYear() == book->getPublicationYear())
		{
			if (books[i]->getIsInStock() == false)
			{
				books[i]->setIsInStock();
				cout << "Thank you for returning this book.\n\n";
				return;
			}
			else
			{
				cout << "We have already this book. Return the book that you took!!!\n\n";
				return;
			}
		}
	}
	cout << "This book wasn't in library. You bring another book. Please bring the book that took!!!\n";
	return;
}


void Library::printBooks()
{
	cout << "\t\tBOOKS:\n\n";
	for (int i = 0; i < books.size(); i++)
	{
		cout << i + 1 << " Book:\n";
		books[i]->displayBook();
	}
	cout << "\n\n";
}