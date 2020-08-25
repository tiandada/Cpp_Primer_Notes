#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::back_inserter;

int main()
{
	vector<int> vec = {0,1,2,3,4,5,6,7,8,9};
	list<int> lst;
	copy(vec.crbegin()+2, vec.crend()-3, back_inserter(lst));
	for (auto i : lst)
		cout << i << " ";
	cout << endl;
	return 0;
}
