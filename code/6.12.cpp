#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int &p1, int &p2)
{
	int i = p2;
	p2 = p1;
	p1 = i;
}

int main()
{
	int i = 12, j = 20;
	cout << i << " " << j << endl;
	swap(i, j);
	cout << i << " " << j << endl;
	return 0;
}
