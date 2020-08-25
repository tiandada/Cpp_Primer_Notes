#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> iv = {1, 2, 3, 4, 5, 6, 7};
	vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
	cout << *mid << endl;
	while(iter != mid)
	{
		if (*iter == 2)
			iv.insert(iter, 2 * 2);
		++iter;
	}
	for(auto i : iv)
		cout << i << " ";
	cout << endl;
	cout << *mid << endl;
	return 0;
}
