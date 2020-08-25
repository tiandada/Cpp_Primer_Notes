#include <iostream>
#include <vector>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int i;
	vector<int> vec;
	while(cin >> i)
	{
		vec.push_back(i);
	}
	for (auto i : vec)
		cout << i << " ";
	cout << endl;
	return 0;
}
