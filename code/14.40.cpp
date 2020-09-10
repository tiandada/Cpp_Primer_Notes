#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::endl;
using std::string;
using std::vector;
using std::sort;
using std::stable_sort;
using std::find_if;
using std::for_each;

class ShorterString {
public:
	bool operator()(string const& s1, string const& s2) const { return s1.size() < s2.size(); }
};

class BiggerEquel {
	size_t sz_;
public:
	BiggerEquel(size_t sz) : sz_(sz) { }
	bool operator()(string const& s) { return s.size() >= sz_; }
};

class Print {
public:
	void operator()(string const& s) { cout << s << " "; }
};

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());

	auto end_unique = unique(words.begin(), words.end());

	words.erase(end_unique, words.end());
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	stable_sort(words.begin(), words.end(), ShorterString());
	auto wc = find_if(words.begin(), words.end(), [sz](const string &a){return a.size() >= sz;});
	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", "s")
	     << " of length " << sz << " or longer" << endl;
	for_each(wc, words.end(), [](const string &s){cout << s << " ";});
	cout << endl;
}

int main()
{
	vector<string> svec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
	biggies(svec, 5);
	return 0;
}
