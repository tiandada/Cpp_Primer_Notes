#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::count_if;
using namespace std::placeholders;

bool get(const string &s)
{
	return s.size() > 6;
}

int main()
{
	vector<string> v = {"hello", "asfdasfas", "aaaaaaa", "adfh", "bbbbbbb"};
	auto c = count_if(v.begin(), v.end(), bind(get, _1));
	cout << c << endl;
	return 0;
}
