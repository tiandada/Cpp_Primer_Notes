#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s("hello world");
	for(auto &c : s)
	{
		c = 'X';
	}
	cout << s << endl;
	return 0;
}
