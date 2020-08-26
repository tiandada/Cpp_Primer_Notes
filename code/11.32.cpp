#include <iostream>
#include <string>
#include <map>
#include <set>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::multimap;
using std::map;
using std::multiset;

int main()
{
	multimap<string, string> authors{
		{ "alan", "DMA" },
		{ "pezy", "LeetCode" },
		{ "alan", "CLRS" },
		{ "wang", "FTP" },
		{ "pezy", "CP5" },
		{ "wang", "CPP-Concurrency" }
	};
	map<string, multiset<string>> order_authors;
	for (const auto &a : authors)
		order_authors[a.first].insert(a.second);
	for (const auto &a : order_authors)
	{
		cout << a.first << ": ";
		for(const auto &w : a.second)
			cout << w << " ";
		cout << endl;
	}
	return 0;
}
