#include <iostream>

using namespace std;

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
	for (auto b = a; b != a + 8; ++b)
		*b = 0;
	for (auto i : a)
		cout << i << endl;
	return 0;
}
