#include <iostream>

using std::cout;
using std::endl;
using std::initializer_list;

int sum(initializer_list<int> const& li)
{
	int sum = 0;
	for (auto i : li)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	cout << sum({1,3,4,5,6}) << endl;
	return 0;
}
