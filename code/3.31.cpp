#include <iostream>

using namespace std;

int main()
{
	int ia[10];
	for (size_t ix = 0; ix < 10; ++ix)
		ia[ix] = ix;
	for (size_t ix = 0; ix < 10; ++ix)
		cout << ia[ix] << " ";
	cout << endl;
	return 0;
}
