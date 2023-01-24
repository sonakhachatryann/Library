#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
	Book();
	Book(const std::string&, const std::string&);
	~Book();

	bool operator==(const Book&);
	std::string get_title() const;
	std::string get_author() const;
	void set_title(const std::string&);
	void set_author(const std::string&);

private:
	std::string title;
	std::string author;
};

#endif // BOOK_H