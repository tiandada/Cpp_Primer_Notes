#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::partition;

bool more5(const string &s)
{
	return s.size() >= 5;
}

int main()
{
	vector<string> words = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
	auto end_pos = partition(words.begin(), words.end(), more5);
	words.erase(end_pos, words.end());
	for (auto s : words)
		cout << s << " ";
	cout << endl;
	return 0;
}
