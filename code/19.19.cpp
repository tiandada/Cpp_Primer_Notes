#include "19.19_sales.h"
#include <vector>
#include <algorithm>
#include <functional>


std::vector<Sales_data>::const_iterator count(const std::vector<Sales_data> &vec, double d)
	{
		auto fcn = std::bind(&Sales_data::avg_price, std::placeholders::_1);
		return find_if(vec.cbegin(), vec.cend(), [&](const Sales_data &s){ return d < fcn(s); });
	}


int main()
{
	std::vector<Sales_data> sv;
	Sales_data sd("010-C", 2, 10.0);
	sv.push_back(sd);
	sv.push_back(sd);
	
	auto it = count(sv, 2);
	std::cout << it->isbn() << " " << it->avg_price() << std::endl;

	return 0;
}
