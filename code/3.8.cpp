#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s("hello world");
	int index = 0;
	while(index < s.size())
	{
		s[index] = 'X';
		++index;
	}
	cout << s << endl;
	return 0;
}
