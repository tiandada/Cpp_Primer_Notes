#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::set;
using std::find;

int main()
{
	vector<string> vec;
	string word;
	while(cin >> word)
	{
		if(find(vec.begin(), vec.end(), word) == vec.end())
			vec.push_back(word);
	}
	for(auto w : vec)
		cout << w << " ";
	cout << endl;
	return 0;
}
