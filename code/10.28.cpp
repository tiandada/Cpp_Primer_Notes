#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::inserter;
using std::back_inserter;
using std::front_inserter;

int main()
{
	vector<int> vec = {1,2,3,4,5,6,7,8,9};
	list<int> ls1, ls2, ls3;
	copy(vec.cbegin(), vec.cend(), inserter(ls1, ls1.begin()));
	for(auto i : ls1)
		cout << i << " ";
	cout << endl;

	copy(vec.cbegin(), vec.cend(), front_inserter(ls2));
	for (auto i : ls2)
		cout << i << " ";
	cout << endl;

	copy(vec.cbegin(), vec.cend(), back_inserter(ls3));
	for (auto i : ls3)
		cout << i << " ";
	cout << endl;
	return 0;
}
