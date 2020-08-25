#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string str;
	string st;
	while(cin >> str)
		st += (str+' ');
		cout << st << endl;
	return 0;
}
