#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<char> v = {'h', 'e', 'l', 'l', 'o'};
	string s(v.begin(),v.end());
	cout << s << endl;

	return 0;
}

