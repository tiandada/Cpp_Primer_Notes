#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	if(argc == 3)
	{
		string s;
		string s1 = argv[1];
		string s2 = argv[2];
		s = s1 + s2;
		cout << s << endl;
	}
	return 0;
}
