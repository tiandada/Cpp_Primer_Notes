#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::fill_n;

int main()
{
	vector<int> iv = {1,2,3,4,5,6,7,8,9};
	fill_n(iv.begin(), iv.size(), 0);
	for (auto i : iv)	
		cout << i << " ";
	cout << endl;
	return 0;
}
