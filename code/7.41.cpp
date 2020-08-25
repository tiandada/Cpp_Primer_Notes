#include "7.41.h"

Sales_data::Sales_data(std::istream &is) : Sales_data()
{
	std::cout << "Sales_data(istream &is)" << std::endl;
	read(is, *this);
}

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

std::istream &read(std::istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
	os << item.bookNo << " " << item.units_sold << " " << item.revenue;
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

int main()
{
	std::cout << "1.default way: " << std::endl;
	std::cout << "====================" << std::endl;
	Sales_data s1;
	print(std::cout, s1);

	std::cout << "\n2.use std::string as parameter: " << std::endl;
	std::cout << "===================="  << std::endl;
	Sales_data s2("test-book");
	print(std::cout, s2);

	std::cout << "\n3. complete parameters: " << std::endl;
	std::cout << "====================" << std::endl;
	Sales_data s3("test_book", 3, 27.0);
	print(std::cout, s3);

	std::cout << "\n4. use istream as paramer: " << std::endl;
	std::cout << "====================" << std::endl;
	Sales_data s4(std::cin);

	return 0;
}
