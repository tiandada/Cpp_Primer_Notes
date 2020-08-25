#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string s1("hello");
	string s2("world");
	if(s1 == s2)
		cout << "equal" << endl;
	if(s1 < s2)
		cout << "s1 < s2" << endl;
	else
		cout << "s1 > s2" << endl;

	cout << "========" << endl;
	const char ca1[] = "hello";
	const char ca2[] = "world";
	if (strcmp(ca1, ca2) == 0)
		cout << "equal" << endl;
	if (strcmp(ca1, ca2) < 0)
		cout << "ca1 < ca2" << endl;
	else
		cout << "ca1 > ca2" << endl;
	return 0;
}

