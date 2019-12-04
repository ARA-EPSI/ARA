#include <iostream>

using namespace std;


void initialize_library()
{
	// Fill the library with names, various informations, the state available ...

	my_library[4].name = "Harry potter";
}

void print_library_inventory()
{
	// This function print on terminal the inventory in a nice way
}

bool is_book_available(string name_of_book)
{
	// return true if the book is available and false if the book isn't
}

void return_book(Book * the_book_I_return)
{
	// This function return a book to the library
}

Book * take_book(string name_of_book)
{
	// search the book by name and return it
	return NULL;
}


int main()
{

	cout << "Starting library program"<<endl;

	initialize_library();

	print_library_inventory();

	is_book_available("Harry potter");

	Book * book_from_library = take_book("Harry potter");

	print_library_inventory();

	return_book(book_from_library);

	print_library_inventory();
}
