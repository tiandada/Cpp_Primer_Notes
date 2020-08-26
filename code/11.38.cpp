#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <set>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::unordered_map;
using std::set;
using std::string;

int main()
{
	unordered_map<string, size_t> word_count;
	set<string> exclude = {"the", "a", "an", "and", "or", "but"};
	string word;
	while(cin >> word)
	{
		if(exclude.find(word) == exclude.end())
			++word_count[word];
	}

	for (const auto &w : word_count)
		cout << w.first << " occurs " << w.second
		     << ((w.second > 1) ? " times" : "time") << endl;
	return 0;
}
