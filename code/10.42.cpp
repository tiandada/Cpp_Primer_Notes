#include <iostream>
#include <list>
#include <string>

using std::cout;
using std::endl;
using std::list;
using std::string;

void elimDups(list<string> &words)
{
	words.sort();
	words.unique();
	for (auto s : words)
		cout << s << " ";
	cout << endl;
}

int main()
{
	list<string> svec = {"the", "quick", "red", "fox", "jumps", "over", "the", 				   "slow", "red", "turtle"};
	elimDups(svec);
	return 0;
}
