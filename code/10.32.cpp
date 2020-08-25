#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <vector>

#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::istream_iterator;
using std::ostream_iterator;
using std::sort;
using std::find_if;
using std::accumulate;

int main()
{
	Sales_item total;
	vector<Sales_item> items;
	istream_iterator<Sales_item> in_iter(cin), eof;
	while(in_iter != eof)
	{
		items.push_back(*in_iter++);
	}
	sort(items.begin(), items.end(), compareIsbn);
	for(auto beg = items.cbegin(), end = beg; beg != items.cend(); beg = end)
	{
		end = find_if(beg, items.cend(), [beg](const Sales_item &item){return item.isbn() != beg->isbn();});
		cout << accumulate(beg, end, Sales_item(beg->isbn())) << endl;
	}
	return 0;
}
