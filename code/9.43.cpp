#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string replace(string& s, const string& oldVal, const string& newVal)
{
	auto len = oldVal.size();
	for(auto i = s.begin(); i != s.end()-len-1; ++i)
	{
		if(string(i,i+len) == oldVal)
		{
			i = s.erase(i, i+len);
			s.insert(i, newVal.begin(), newVal.end());
			return s;
		}
	}
}

int main()
{
	string s = "to drive straight thru is a foolish";
	s = replace(s, "thru", "thrught");
	cout << s << endl;
	return 0;
}
