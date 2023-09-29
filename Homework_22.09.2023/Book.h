#pragma once
#include <iostream>
using namespace std;


class Book
{
private:
	string name;
	string author;
	int publicationYear;
	int isInStock;


public:
	Book();
	Book(string name_, string author_, int publicationYear_);

	void displayBook();
	

	string getName();
	string getAuthor();
	int getPublicationYear();
	int getIsInStock();

	void setIsInStock();
	void setIsNotInStock();
};

