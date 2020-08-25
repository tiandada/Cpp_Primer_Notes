#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec = {1,2,3,4,5,6,7,8,9};
	for(auto iter = vec.crbegin(); iter != vec.crend(); ++iter)
		cout << *iter << " ";
	cout << endl;
	return 0;
}
