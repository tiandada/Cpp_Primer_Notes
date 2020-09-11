#include "15.3.h"
#include "15.5.h"

double Bulk_quote::net_price(std::size_t cnt) const 
{
	if(cnt >= min_qty)	
		return cnt * (1 - discount) * price;
	else
		return cnt * price;
}

int main()
{
	Quote q("testbook", 10.6);
	Bulk_quote bq("testbook", 10.6, 10, 0.3);
	print_total(std::cout, q, 12);
	print_total(std::cout, bq, 12);
	return 0;
}
