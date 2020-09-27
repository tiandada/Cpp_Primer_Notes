#include "17.4_sales.h"
#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include <algorithm>
#include <utility>
#include <numeric>

typedef std::pair<std::vector<Sales_data>::size_type, std::pair<std::vector<Sales_data>::const_iterator, std::vector<Sales_data>::const_iterator>> matches_pair;

std::vector<matches_pair> findBook_pair(const std::vector<std::vector<Sales_data>> &files, const std::string& book)
{
	std::vector<matches_pair> ret;
	for(auto it = files.cbegin(); it != files.cend(); ++it)
	{
		auto found = std::equal_range(it->cbegin(), it->cend(), book, compareIsbn);
		if(found.first != found.second)
			ret.push_back(std::make_pair(it - files.cbegin(), std::make_pair(found.first, found.second)));
	}
	return ret;
}

int main()
{
	return 0;
}
