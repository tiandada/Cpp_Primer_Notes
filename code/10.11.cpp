#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::unique;
using std::sort;

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

void elimDups(vector<string> &words)
{
	for (auto s : words)
		cout << s << " ";
	cout << endl;

	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());

	for (auto s : words)
		cout << s << " ";
	cout << endl;
}

int main()
{
	vector<string> svec = {"the", "quick", "red", "fox", "jumps", "over", "the", 				   "slow", "red", "turtle"};
	elimDups(svec);
	stable_sort(svec.begin(), svec.end(), isShorter);
	for (auto s : svec)
		cout << s << " ";
	cout << endl;
	return 0;
}
