#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v = {0,1,2,3,4,5,6,7,8};
	auto begin = v.begin(), end = v.end();
	while(begin != end)
	{
		++begin;
		v.insert(begin, 42);
		++begin;
	}
	for (auto i : v)
		cout << i << " ";
	cout << endl;
	return 0;
}


