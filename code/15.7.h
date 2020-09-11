#ifndef _15_7_H
#define _15_7_H

#include <iostream>
#include <string>

class Limit_quote : public Quote {
public:
	Limit_quote() = default;
	Limit_quote(const std::string &book, double p, std::size_t qty, double disc) : Quote(book, p), max_qty(qty), discount(disc) { }
	double net_price(std::size_t) const override;
private:
	std::size_t max_qty = 0;
	double discount = 0.0;
};

#endif
