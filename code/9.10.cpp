#include <iostream>
#include <vector>

using std::vector;

int main()
{
	vector<int> v1;
	const vector<int> v2;
	auto it1 = v1.begin(), it2 = v1.end();
	auto it3 = v2.begin(), it4 = v2.end();
	return 0;
}
