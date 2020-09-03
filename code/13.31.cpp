#include <iostream>
#include <vector>
#include <algorithm>
#include "13.31.h"

using std::vector;
using std::sort;

int main()
{
	HasPtr s{ "s" }, a{ "a" }, c{"c"};
	vector<HasPtr> vec{s,a,c};
	sort(vec.begin(), vec.end());
	for(auto const& elem : vec)
		elem.show();
	return 0;
}
