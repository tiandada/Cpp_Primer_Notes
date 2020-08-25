#include <iostream>
#include <string>
#include <forward_list>

using std::cout;
using std::endl;
using std::string;
using std::forward_list;

void insert(forward_list<string> &fl, const string& s1, const string& s2)
{
	auto prev = fl.before_begin();
	auto curr = fl.begin();
	while(curr != fl.end())
	{
		if(*curr == s1)
		{
			fl.insert_after(curr, s2);
			return;
		}
		else
		{
			prev = curr;
			++curr;
		}
	}
	fl.insert_after(prev,s2);
}

int main()
{
	forward_list<string> fl = {"hello", "word", "insert", "before", "after"};
	insert(fl, "insert", "here");
	for (auto s : fl)
		cout << s << " ";
	cout << endl;

	return 0;
}
