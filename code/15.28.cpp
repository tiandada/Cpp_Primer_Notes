#include <iostream>
#include <memory>
#include <vector>
#include "15.3.h"
#include "15.5.h"

int main()
{
	std::vector<Quote> v;
	for(unsigned i = 1; i != 10; ++i)
		v.push_back(Bulk_quote("sss", i * 10.1, 10, 0.2));
	double total = 0;
	for(const auto &b : v)
		total += b.net_price(20);
	std::cout << total << std::endl;

	std::vector<std::shared_ptr<Quote>> pv;
	for(unsigned i = 1; i != 10; ++i)
		pv.push_back(std::make_shared<Bulk_quote>(Bulk_quote("sss", i * 10.1, 10, 0.3)));
	double total_p = 0;
	for(auto p : pv)
		total_p += p->net_price(20);
	std::cout << total_p << std::endl;
	return 0;
}
