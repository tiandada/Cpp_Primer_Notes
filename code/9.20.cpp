#include <iostream>
#include <deque>
#include <list>

using std::cout;
using std::endl;
using std::deque;
using std::list;

int main()
{
	list<int> ls = {1, 2, 3, 4 ,5 ,6, 7, 8};
	deque<int> dq1, dq2;
	for(auto i : ls)
	{
		if(i%2 == 0)
			dq2.push_back(i);
		else
			dq1.push_back(i);
	}
	cout << "dq1: ";
	for(auto i : dq1)
		cout << i << " ";
	cout << endl;
	cout << "dq2: ";
	for(auto i : dq2)
		cout << i << " ";
	cout << endl;
	return 0;
}
