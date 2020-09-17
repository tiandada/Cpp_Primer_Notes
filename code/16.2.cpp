#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template<typename T>
int compare(const T &lhs, const T &rhs)
{
	if(lhs < rhs) return -1;
	if(rhs < lhs) return 1;
	return 0;
}

int main()
{
	cout << compare(1,0) << endl;
	return 0;
}
