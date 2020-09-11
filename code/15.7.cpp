#include "15.3.h"
#include "15.5.h"
#include "15.7.h"

double Bulk_quote::net_price(std::size_t cnt) const 
{
	if(cnt >= min_qty)	
		return cnt * (1 - discount) * price;
	else
		return cnt * price;
}


double Limit_quote::net_price(std::size_t n) const
{
	if(n > max_qty)
		return (n - max_qty) * price + max_qty * (1-discount) * price;
	else
		return n * (1-discount) * price;
}

int main()
{
	Quote q("testbook", 10.6);
	Bulk_quote bq("testbook", 10.6, 10, 0.3);
	Limit_quote lq("testbook", 10.6, 10, 0.3);
	print_total(std::cout, q, 5);
	print_total(std::cout, bq, 5);
	print_total(std::cout, lq, 5);
	return 0;
}
