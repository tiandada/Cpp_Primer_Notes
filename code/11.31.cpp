#include <iostream>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::multimap;

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
	auto pos = authors.find("wang");
	if(pos != authors.end())
		authors.erase(pos);
	for (auto const &a : authors)
		cout << a.first << ": " << a.second << endl;
	return 0;
}
