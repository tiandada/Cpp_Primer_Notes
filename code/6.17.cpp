#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


bool hasUpper(const string& s)
{
	for (auto i = 0; i < s.size(); ++i)
	{
		if(isupper(s[i]))
			return true;
	}
	return false;
}

void toLower(string& s)
{
	for (auto i = 0; i < s.size(); ++i)
	{
		if(isupper(s[i]))
			s[i] = tolower(s[i]);
	}
}

int main()
{
	string s;
	cin >> s;
	cout << hasUpper(s) << endl;
	toLower(s);
	cout << s << endl;
	return 0;
}
