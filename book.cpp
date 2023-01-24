#include <iostream>
#include "book.h"

Book::Book() {}

Book::Book(const std::string& new_title, const std::string& new_author)
	: title{ new_title }
	, author{ new_author }
{}

Book::~Book() {}

bool Book::operator==(const Book& obj) {
	return title == obj.title && author == obj.author;
}

std::string Book::get_title() const {
	return title;
}

std::string Book::get_author() const {
	return author;
}

void Book::set_title(const std::string& new_title) {
	title = new_title;
}

void Book::set_author(const std::string& new_author) {
	author = new_author;
}