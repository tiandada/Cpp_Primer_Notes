#include "16.62_sales.h"
#include <iostream>
#include <memory>
#include <unordered_set>

int main()
{
	std::unordered_multiset<Sales_data> mset;
	Sales_data sd("Bi", 10, 0.98);
	mset.emplace(sd);
	mset.emplace("C primer", 5, 9.99);
	for(const auto &item : mset)
		std::cout << "the hash code of " << item.isbn()
			  << ":\n0x" << std::hex << std::hash<Sales_data>()(item)
			  << "\n";
	return 0;
}
