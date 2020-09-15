#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <fstream>

#include "15.30.h"
#include "15.30_quote.h"
#include "15.30_disc_quote.h"
#include "15.30_bulk_quote.h"

double Basket::total_receipt(std::ostream &os) const
{
	double sum = 0.0;
	for(auto iter = items.cbegin(); iter != items.cend(); iter = items.upper_bound(*iter))
	{
		sum += print_total(os, **iter, items.count(*iter));
	}

	os << "Total Sale: " << sum << std::endl;
	return sum;
}

int main()
{
	Basket basket;
	for(unsigned i = 0; i != 10; ++i)
		basket.add_item(Bulk_quote("Bible", 20.6, 20, 0.3));
	for(unsigned i = 0; i != 10; ++i)
		basket.add_item(Bulk_quote("C++Primer", 30.9, 5, 0.4));
	for(unsigned i = 0; i != 10; ++i)
		basket.add_item(Quote("ClRS", 40.1));

	std::ofstream log("log.txt", std::ios_base::app|std::ios_base::out);

	basket.total_receipt(log);

	return 0;
}
