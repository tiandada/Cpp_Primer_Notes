#ifndef _17_4_SALES_H
#define _17_4_SALES_H

#include <iostream>
#include <string>

class Sales_data {
	friend std::istream& operator>>(std::istream&, Sales_data&);
	friend std::ostream& operator<<(std::ostream&, const Sales_data&);
	friend Sales_data operator+(const Sales_data&, const Sales_data&);
	friend std::ostream& print(std::ostream&, const Sales_data&);
	friend std::istream& read(std::istream&, Sales_data&);
	friend bool operator==(const Sales_data &, const Sales_data &);
public:
	Sales_data() = default;
	Sales_data(const std::string &s) : bookNo(s) { }
	Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n) { }
	Sales_data(const Sales_data &s) : bookNo(s.bookNo), units_sold(s.units_sold), revenue(s.revenue) { }
	Sales_data(Sales_data &&s) : bookNo(s.bookNo), units_sold(s.units_sold), revenue(s.revenue) { }

	~Sales_data() { }
	Sales_data(std::istream &);
	Sales_data& operator=(const std::string& rhs);
	Sales_data& operator=(const Sales_data& rhs);
	Sales_data& operator+=(const Sales_data& rhs);

	explicit operator std::string() const { return bookNo; }
	explicit operator double() const { return avg_price(); }

	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	 
	double avg_price() const;
private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

std::istream& operator>>(std::istream&, Sales_data&);
std::ostream& operator<<(std::ostream&, const Sales_data&);
Sales_data operator+(const Sales_data&, const Sales_data&);


inline bool operator==(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.isbn() == rhs.isbn() && lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue;
}

inline bool operator!=(const Sales_data &lhs, const Sales_data &rhs)
{
	return !(lhs == rhs);
}

inline bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.isbn() < rhs.isbn();
}

#endif
