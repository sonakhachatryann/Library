#include <iostream>
#include "student.h"

Student::Student() {}

Student::Student(const std::string& new_name)
	: name{ new_name }
{}

Student::~Student() {}

std::string Student::get_name() const {
	return name;
}

void Student::set_name(const std::string& new_name) {
	name = new_name;
}

std::vector<Book> Student::get_books() const {
	return books;
}

void Student::set_books(std::vector<Book>& new_books) {
	books = new_books;
}