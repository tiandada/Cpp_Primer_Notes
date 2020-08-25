#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string getNewstring(string& s, const string& p, const string& e)
{
	s.insert(0, p);
	s.insert(s.size(), e);
	return s;
}

int main()
{
	string s("tom");
	s = getNewstring(s,"Mr."," III");
	cout << s << endl;
	return 0;
}
