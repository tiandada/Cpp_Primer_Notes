#ifndef _14_13_H
#define _14_13_H

#include <iostream>
#include <string>

class Sales_data {
	friend std::istream& operator>>(std::istream &is, Sales_data &item);
	friend std::ostream& operator<<(std::ostream &os, const Sales_data &item);
	friend Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);
	friend Sales_data operator-(const Sales_data &lhs, const Sales_data &rhs);

public:
	Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p * n){ }
	Sales_data() : Sales_data("", 0, 0.0f){ }
	Sales_data(const std::string &s) : Sales_data(s, 0, 0.0f){ }
	Sales_data(std::istream &is);

	Sales_data& operator+=(const Sales_data&);
	Sales_data& operator-=(const Sales_data&);
	std::string isbn() const { return bookNo; } 

private:
	inline double avg_price() const;
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

inline double Sales_data::avg_price() const
{
	return units_sold ? revenue/units_sold : 0;
}

std::istream& operator>>(std::istream &is, Sales_data &item);
std::ostream& operator<<(std::ostream &os, const Sales_data &item);
Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);
Sales_data operator-(const Sales_data &lhs, const Sales_data &rhs);


#endif
