#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int ia[10];
	//int sa[10];
	vector<int> sa;
	for (size_t ix = 0; ix < 10; ++ix)
		ia[ix] = ix;
	for (size_t ix = 0; ix < 10; ++ix)
		sa.push_back(ia[ix]);
	for (auto &i : sa)
		cout << i << " ";
	cout << endl;
	/**
	for (size_t ix = 0; ix < 10; ++ix)
		sa[ix] = ia[ix];
	for (size_t ix = 0; ix < 10; ++ix)
		cout << sa[ix] << " ";
	cout << endl;
	**/
	return 0;
}
