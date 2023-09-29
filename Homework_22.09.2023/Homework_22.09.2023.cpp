#include <iostream>
using namespace std;



#include "Library.h"
#include "Book.h"

int main()
{
	Library* library = new Library();


	Book* book1 = new Book("Titanik", "Volter", 1958);				// Create first book
	Book* book2 = new Book("Superman", "Gerry", 1938);				// Create second book
	Book* book3 = new Book("Twilight", "Stefany", 2001);			// Create third book 
	Book* book4 = new Book("The_Lord_of_the_Rings", "John", 1955);	// Create fourth book


	library->addBook(book1); // Add first book
	library->addBook(book2); // Add second book
	library->addBook(book3); // Add third book
	library->addBook(book4); // Add fourth book
	cout << "\n\n";

	library->printBooks(); // Print all books

	library->removeBook(book1); // Remove the book
	library->removeBook(book1); // Give the message that this book isn't in library
	cout << "\n\n";

	library->printBooks(); // Print all books


	library->giveBook(book1); // Give message, that this book isn't in library
	library->giveBook(book2); // Print all parametrs about this book and set the value "isn't in stock"
	cout << "\n\n";


	library->printBooks(); // Print all books

	library->returnByStudentBook(book3); // Give message, that this book is already in library
	library->returnByStudentBook(book2); // Will thanks for returning the book
	cout << "\n\n";


	library->printBooks(); // Print all books
}
