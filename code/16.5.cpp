#include <iostream>

using std::cout;
using std::endl;

template<typename T>
void print(T const &arr)
{
	for(auto elem : arr)
		cout << elem << endl;
}

int main()
{
	int k[] = {0,1,2,3,4,5};
	print(k);
	return 0;
}
