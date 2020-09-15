#ifndef _15_30_H
#define _15_30_H

#include "15.30_quote.h"
#include <set>
#include <memory>

class Basket {
public:
	void add_item(const Quote &sale) { items.insert(std::shared_ptr<Quote>(sale.clone())); }
	void add_item(Quote &&sale) { items.insert(std::shared_ptr<Quote>(std::move(sale).clone())); }
	double total_receipt(std::ostream &os) const;
private:
	static bool compare(const std::shared_ptr<Quote> &lhs, const std::shared_ptr<Quote> &rhs) {return lhs->isbn() < rhs->isbn(); }
	std::multiset<std::shared_ptr<Quote>, decltype(compare)*> items{ compare };
};

#endif
