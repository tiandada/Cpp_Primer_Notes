#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> v;
	for (string buf; cin >> buf; v.push_back(buf))
	{
		cout << v.capacity() << endl;
	}
	return 0;
}
