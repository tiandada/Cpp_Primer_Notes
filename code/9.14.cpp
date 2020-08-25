#include <iostream>
#include <string>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::list;

int main()
{
	list<char *>  lst{"He", "ll", "o"};
	vector<string> svec;
	svec.assign(lst.begin(), lst.end());
	for (auto i : svec)
		cout << i << endl;
	return 0;
}
