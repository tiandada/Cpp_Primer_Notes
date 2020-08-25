#include <iostream>
#include <string>
#include <deque>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::deque;

int main()
{
	string buf;
	deque<string> dq;
	while(cin >> buf)
	{
		dq.push_back(buf);
	}
	for(auto i = dq.begin(); i != dq.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;
	return 0;
}
