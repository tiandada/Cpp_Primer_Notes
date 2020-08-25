#include <iostream>

using std::cout;
using std::endl;

void swap(int * &lp, int * &rp)
{
	auto t = lp;
	lp = rp;
	rp = t;
}

int main()
{
	int i = 10;
	int j = 9;
	int *ip = &i;
	int *jp = &j;
	cout << *ip << " " << *jp << endl;
	swap(ip, jp);
	cout << *ip << " " << *jp << endl;
	return 0;
}
