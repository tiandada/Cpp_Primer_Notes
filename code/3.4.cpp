#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string str1, str2;
	while(cin >> str1 >> str2)
	{
		if(str1 != str2)
		{
			if(str1 > str2)
				cout << str1 << endl;
			else
				cout << str2 << endl;
		}
	}
	return 0;
}
