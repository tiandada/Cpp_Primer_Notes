#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string replace(string& s, const string& oldVal, const string& newVal)
{
	auto len = s.size();
	auto len_old = oldVal.size();
	for(auto i = 0; i <= len-len_old; ++i)
	{
		if(s.substr(i,len_old) == oldVal)
		{
			s.replace(i, len_old, newVal);
			return s;
		}
	}
}

int main()
{
	string s = "thru";
	s = replace(s, "thru", "thrught");
	cout << s << endl;
	return 0;
}
