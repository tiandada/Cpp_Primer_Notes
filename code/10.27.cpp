#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::unique_copy;
using std::inserter;

int main()
{
	vector<int> vec = {0,1,2,3,3,5,6,6,9};
	list<int> lst;
	unique_copy(vec.begin(), vec.end(), inserter(lst,lst.begin()));
	for (auto i : lst)
		cout << i << " ";
	cout << endl;
	return 0;
}
