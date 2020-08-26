#include <iostream>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;

int main()
{
	map<string, int> word_count;
	string word;
	while(cin >> word)
	{
		auto ret = word_count.insert({word, 1});
		if(!ret.second)
		{
			++ret.first->second;
		}
	}

	for (auto const &w : word_count)
		cout << w.first << " occurs " << w.second
		     << ((w.second > 1) ? " times" : "time") << endl;
	return 0;
}
