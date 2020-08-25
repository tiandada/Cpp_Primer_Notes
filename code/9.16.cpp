#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int main()
{
	vector<int> v1 = {1, 2, 3, 4, 5};
	vector<int> v2 = {0, 1, 2, 3};
	list<int> l1 = {0, 1, 2, 3};
	cout << (vector<int>(l1.begin(), l1.end()) == v2 ? "true" : "false")  << endl;
	return 0;
}
