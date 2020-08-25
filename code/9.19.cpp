#include <iostream>
#include <string>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;

int main()
{
	string buf;
	list<string> ls;
	while(cin >> buf)
	{
		ls.push_back(buf);
	}
	for(auto i = ls.begin(); i != ls.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;
	return 0;
}
