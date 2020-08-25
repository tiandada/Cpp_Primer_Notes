#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::count_if;

int main()
{
	vector<string> v = {"hello", "asfdasfas", "aaaaaaa", "adfh", "bbbbbbb"};
	auto c = count_if(v.begin(), v.end(), [](const string &s){return s.size() > 6;});
	cout << c << endl;
	return 0;
}
