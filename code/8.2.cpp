#include <iostream>
#include <string>

using std::istream;
using std::cin;
using std::cout;
using std::endl;
using std::string;

istream &read(istream &is)
{
	string buf;
	while(cin >> buf)
	{
		cout << buf << endl;
	}
	is.clear();
	return is;
}

int main()
{
	istream &is = read(cin);
	cout << is.rdstate() << endl;
	return 0;
}

