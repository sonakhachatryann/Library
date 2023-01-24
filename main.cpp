#include <iostream>
#include "library.h"

int main() {

	Book book1("Professional C++", "Nicholas A. Solter");
	Book book2("Effective modern c++", "Meyers");
	Library lib("Picsart Academy's library");
	std::vector<Book> books = { book1, book2 };
	lib.set_books(books);
	Student student("Sona");
	lib.take(student, book1);
	for (size_t i = 0; i < student.get_books().size(); ++i) {
		std::cout << student.get_books()[i].get_title();
	}
	std::cout << std::endl << lib.get_books().size() << std::endl;
	lib.return_book(student, book1);
	
	for (size_t i = 0; i < lib.get_books().size(); ++i) {
		std::cout << lib.get_books()[i].get_title() << std::endl;
	}
	std::cout << std::endl << student.get_books().size() << std::endl;
	return 0;
}