#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v1 = {1, 2, 3, 4, 5};
	vector<int> v2 = {0, 1, 2, 3};
	cout << (v1 == v2 ? "true" : "false")<< endl;
	return 0;
}
