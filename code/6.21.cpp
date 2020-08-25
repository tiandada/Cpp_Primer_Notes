#include <iostream>

using std::cout;
using std::endl;

int getMax(const int i, const int *p)
{
	if(i < *p)
		return i;
	return *p;
}

int main()
{
	int i = 10;
	int j = 9;
	cout << getMax(i, &j) << endl;
	return 0;
}
