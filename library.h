#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"
#include "student.h"

class Library {
public:
	Library();
	Library(const std::string&);
	Library(const Library&);
	~Library();

	std::string get_name() const;
	void set_name(const std::string&);
	std::vector<Book> get_books() const;
	void set_books(const std::vector<Book>&);
	void take(Student&, const Book&);
	void return_book(Student&, const Book&);

private:
	std::string name;
	std::vector<Book> books;
};

#endif // LIBRARY_H