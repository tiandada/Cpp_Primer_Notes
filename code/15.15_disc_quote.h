#ifndef _15_15_DISC_QUOTE_H
#define _15_15_DISC_QUOTE_H

#include "15.3.h"

class Disc_quote : public Quote {
public:
	Disc_quote() = default;
	Disc_quote(const std::string &b, double p, std::size_t q, double d) : Quote(b, p), quantity(q), discount(d) { }
	double net_price(std::size_t n) const = 0;
protected:
	std::size_t quantity = 0;
	double discount = 0.0;
};

#endif
