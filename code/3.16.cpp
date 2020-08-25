#include <iostream>

using namespace std;

int main()
{
	int a[] = {1,2,3,4,5,6};
	int b[] = {1,2,3,4,5,7};
	int *ab = begin(a);
	int *ae = end(a);
	int *bb = begin(b);
	int *be = end(b);
	if((ae-ab) != (be-bb))
	{
		cout << "not eauql" << endl;
		return 0;
	}
	for (int* i = ab, *j = bb; i != ae && j != be; ++i,++j)
	{
		if(*i != *j)
		{
			cout << "not equal" << endl;
			return 0;
		}
	}
	cout << "equal" << endl;
	return 0;
}
