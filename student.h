#ifndef STUDENT_H
#define STUDENT_H

#include <vector>
#include "book.h"

class Student {
public:
	Student();
	Student(const std::string&);
	~Student();

	std::string get_name() const;
	void set_name(const std::string&);
	std::vector<Book> get_books() const;
	void set_books(std::vector<Book>&);

private:
	std::string name;
	std::vector<Book> books;
};

#endif // STUDENT_H