#include <iostream>
#include "library.h"

Library::Library() {}

Library::Library(const std::string& new_name)
	: name{ new_name }
{}

Library::Library(const Library& obj) {
	set_name(obj.get_name());
	set_books(obj.get_books());
}

Library::~Library() {}

std::string Library::get_name() const {
	return name;
}

void Library::set_name(const std::string& new_name) {
	name = new_name;
}

void Library::set_books(const std::vector<Book>& new_books) {
	books = new_books;
}

std::vector<Book> Library::get_books() const {
	return books;
}

void Library::take(Student& student, const Book& book) {
	std::vector<Book> new_books = student.get_books();
	new_books.push_back(book);
	student.set_books(new_books);
	for (size_t i = 0; i < books.size(); ++i) {
		if (books[i] == book) {
			books.erase(books.begin() + i);
			break;
		}
	}
}

void Library::return_book(Student& student, const Book& book) {
	books.push_back(book);
	std::vector<Book> student_books = student.get_books();
	for (size_t i = 0; i < student_books.size(); ++i) {
		if (student_books[i] == book) {
			student_books.erase(student_books.begin() + i);
			break;
		}
	}
	student.set_books(student_books);
}