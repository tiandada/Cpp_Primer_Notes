#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::pair;

int main()
{
	string s;
	int i;
	vector<pair<string, int>> vec;
	while(cin >> s >> i)
	{
		vec.push_back(pair<string, int>(s,i));
		//vec.push_back({s, i});
		//vec.push_back(make_pair(s,i))
		//vec.emplace_back(s,i);
	}
	for(auto v : vec)
	{
		cout << v.first << " " << v.second << endl;
	}
	return 0;
}
