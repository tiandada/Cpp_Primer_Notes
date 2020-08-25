#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<string> str;
	string s;
	while(cin >> s)
		str.push_back(s);
	for ( auto &c : str)
	{
		for (auto &i : c)
		{
			i = toupper(i);
		}
		cout << c << endl;
	}
	return 0;
}
