#ifndef _15_27_H
#define _15_27_H

#include "15.15_disc_quote.h"

class Bulk_quote : public Disc_quote {
public:
	Bulk_quote() = default;
	using Disc_quote::Disc_quote;
	Bulk_quote(const Bulk_quote& bq) : Disc_quote(bq) { }
	Bulk_quote(Bulk_quote &&bq) : Disc_quote(std::move(bq)) { }
	Bulk_quote& operator=(const Bulk_quote &rhs)
	{
		Disc_quote::operator=(rhs);
		return *this;
	}
	Bulk_quote& operator=(Bulk_quote &&rhs)
	{
		Disc_quote::operator=(std::move(rhs));
		return *this;
	}
	double net_price(std::size_t n) const override;
	~Bulk_quote() override { }
};

#endif
