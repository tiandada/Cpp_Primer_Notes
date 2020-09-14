#ifndef _15_15_BULK_QUOTE
#define _15_15_BULK_QUOTE

#include "15.15_disc_quote.h"

class Bulk_quote : Disc_quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string &b, double p, std::size_t q, double d) : Disc_quote(b,p,q,d) { }
	double net_price(std::size_t n) const override;
};

#endif
