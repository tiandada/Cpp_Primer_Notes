#include <iostream>
#include <algorithm>
#include <string>
#include <list>

using std::cout;
using std::endl;
using std::string;
using std::list;

int main()
{
	list<string> ls = {"aa", "hello", "here", "hello","cc","world","bb"};
	auto c = count(ls.begin(), ls.end(), "hello");
	cout << c << endl;
	return 0;
}
