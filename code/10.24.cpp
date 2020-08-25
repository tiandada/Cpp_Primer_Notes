#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::find_if;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
	return s.size() <= sz;
}

int main()
{
	vector<int> vec = {1,2,3,4,5,6,7,8};
	string s = "hello";
	auto result = find_if(vec.begin(),vec.end(),bind(check_size, s, _1));
	if(result != vec.end())
		cout << *result << endl;
	else
		cout << "not found" << endl;
	return 0;
}
