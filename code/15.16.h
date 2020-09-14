#ifndef _15_16_H
#define _15_16_H
#include "15.15_disc_quote.h"

class Limit_quote : public Disc_quote {
public:
	Limit_quote() = default;
	Limit_quote(const std::string &b, double p, std::size_t q, double d) : Disc_quote(b, p, q, d) { }
	double net_price(std::size_t) const override;
};

double Limit_quote::net_price(std::size_t n) const
{
	if(n > quantity)
		return (n - quantity) * price + quantity * (1 - discount) * price;
	else
		return n * (1 - discount) * price;
}

#endif
