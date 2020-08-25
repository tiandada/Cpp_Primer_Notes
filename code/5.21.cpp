#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s;
	string pre = "";
	bool flag = true;
	while(cin >> s)
	{
		if(islower(s[0]))
			continue;
		if(s == pre)	
		{
			flag = false;
			cout << pre << endl;
			break;
		}
		else
			pre = s;
	}
	if(flag)	
		cout << "all words are different" << endl;
	return 0;
}
