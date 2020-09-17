#include <iostream>
#include <string>
#include "7.41.h"

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
	Sales_data s1, s2;
	cout << compare(s1, s2) << endl;
	return 0;
}
