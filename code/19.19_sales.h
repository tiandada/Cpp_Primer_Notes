#ifndef _19_19_SALES_H
#define _19_19_SALES_H

#include <iostream>
#include <string>
#include <stdexcept>

class isbn_mismatch : public std::logic_error {
public:
	explicit isbn_mismatch(const std::string &s) : std::logic_error(s) { }
	isbn_mismatch(const std::string &s, const std::string &lhs, const std::string &rhs) : std::logic_error(s), left(lhs), right(rhs) { }
	const std::string left, right;
};

class Sales_data {
	friend std::hash<Sales_data>;
	friend std::istream& operator>>(std::istream&, Sales_data&);
	friend std::ostream& operator<<(std::ostream&, const Sales_data&);
	friend Sales_data operator+(const Sales_data&, const Sales_data&);
	friend bool operator==(const Sales_data &, const Sales_data &);
public:
	Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p) { }
	Sales_data() : Sales_data("", 0, 0.0f){ }
	Sales_data(const std::string &s) : Sales_data(s, 0, 0.0f){ }
	Sales_data(std::istream &is);

	Sales_data& operator=(const std::string&);
	Sales_data& operator+=(const Sales_data&);
	Sales_data& operator-=(const Sales_data&);
	explicit operator std::string() const { return bookNo; }
	explicit operator double() const { return avg_price(); }

	std::string isbn() const { return bookNo; }

	
	inline double avg_price() const;
private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

std::istream& operator>>(std::istream&, Sales_data&);
std::ostream& operator<<(std::ostream&, const Sales_data&);
Sales_data operator+(const Sales_data&, const Sales_data&);

inline double Sales_data::avg_price() const
{
	return units_sold ? revenue/units_sold : 0;
}

inline bool operator==(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.isbn() == rhs.isbn() && lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue;
}

inline bool operator!=(const Sales_data &lhs, const Sales_data &rhs)
{
	return !(lhs == rhs);
}


namespace std {
template<>
struct hash<Sales_data>
{
	typedef size_t result_type;
	typedef Sales_data argument_type;
	size_t operator()(const Sales_data& s) const
	{
		return hash<string>()(s.bookNo) ^ hash<unsigned>()(s.units_sold) ^ hash<double>()(s.revenue);
	}
};
}

#endif
