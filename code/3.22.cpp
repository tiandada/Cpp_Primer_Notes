#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<string> text;
	string t;
	while(cin >> t)
	{
		text.push_back(t);
	}
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
	{	
		
		for (auto i = it->begin(); i != it->end() && !isspace(*i); ++i)
		{
			*i = toupper(*i);
		}
		cout << *it << endl;
	}
	return 0;
}
