#include "17.4_sales.h"
#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include <algorithm>
#include <utility>
#include <numeric>

struct matches_struct
{
	std::vector<Sales_data>::size_type st;
	std::vector<Sales_data>::const_iterator first;
	std::vector<Sales_data>::const_iterator last;
	matches_struct(std::vector<Sales_data>::size_type s, 
		       std::vector<Sales_data>::const_iterator f,
		       std::vector<Sales_data>::const_iterator l) : st(s), first(f), last(l) { }
};

std::vector<matches_struct> findBook_struct(const std::vector<std::vector<Sales_data>> &files, const std::string& book)
{
	std::vector<matches_struct> ret;
	for(auto it = files.cbegin(); it != files.cend(); ++it)
	{
		auto found = std::equal_range(it->cbegin(), it->cend(), book, compareIsbn);
		if(found.first != found.second)
			ret.push_back(matches_struct(it - files.cbegin(), found.first, found.second));
	}
	return ret;
}

int main()
{
	return 0;
}
