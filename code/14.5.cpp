#include "14.5.h"

std::istream& operator>>(std::istream &in, Book &book)
{
	in >> book.no_ >> book.name_ >> book.author_ >> book.pubdate_;
	return in;
}

std::ostream& operator<<(std::ostream &os, const Book &book)
{
	os << book.no_ << " " << book.name_ << " " << book.author_ << " " << book.pubdate_;
	return os;
}

bool operator==(const Book &lhs, const Book &rhs)
{
	return lhs.no_ == rhs.no_;
}

bool operator!=(const Book &lhs, const Book &rhs)
{
	return !(lhs == rhs);
}

int main()
{
	Book book1(123, "test", "Tom", "2020");
	Book book2(123, "test", "Tom", "2020");
	if(book1 == book2)
		std::cout << book1 << std::endl;
	return 0;
}
