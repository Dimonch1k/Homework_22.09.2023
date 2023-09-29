#include "Book.h"


Book::Book()
{
	name = "";
	author = "";
	publicationYear = 0;
	isInStock = 0;
}

Book::Book(string name_, string author_, int publicationYear_)
{
	this->name = name_;
	this->author = author_;
	this->publicationYear = publicationYear_;
	this->isInStock = 1;
}


void Book::displayBook()
{
	cout << "\tName of the book: " << getName();
	cout << "\n\tAuthor of \"" << getName() << "\" is: " << getAuthor();
	cout << "\n\tYear of publication: " << getPublicationYear();

	if(getIsInStock() == 1) { cout << "\n\tIs in Stock: Yes" << "\n\n"; }
	else if(getIsInStock() == 0 ){ cout << "\n\tIs in Stock: No" << "\n\n"; }
}




string Book::getName()
{
	return name;
}

string Book::getAuthor()
{
	return author;
}

int Book::getPublicationYear()
{
	return publicationYear;
}

int Book::getIsInStock()
{
	return isInStock;
}


void Book::setIsInStock()
{
	isInStock = 1;
}

void Book::setIsNotInStock()
{
	isInStock = 0;
}