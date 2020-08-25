#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	bool result = true;
	vector<int> iv1 = {0,1,1,2};
	vector<int> iv2 = {0,1,1,3,4,5,8};
	size_t len = (iv1.size() <= iv2.size()) ? iv1.size() : iv2.size();
	for (int i = 0; i != len-1; ++i)
	{
		if(iv1[i] != iv2[i])
			result = false;
	}
	cout << result << endl;
	return 0;
}
