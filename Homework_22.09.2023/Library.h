#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "Book.h"
class Library : public Book
{
private:
	vector<Book*> books;

public:

	void addBook(Book* book);
	void removeBook(Book* book);

	void giveBook(Book* book);
	void returnByStudentBook(Book* book);

	void printBooks();
};

