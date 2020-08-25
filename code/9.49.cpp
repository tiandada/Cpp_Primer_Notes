#include <iostream>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;

int main()
{
	ifstream f("test_9_49.txt");
	if(!f)
		return -1;	
	string scender("acemnoresuvwxz");
	string s, longest;
	while (f >> s)
	{
		if(s.find_first_not_of(scender) == string::npos)
		{
			if(s.size() > longest.size())
				longest = s;
		}
	}
	cout << longest << endl;
	return 0;
}
