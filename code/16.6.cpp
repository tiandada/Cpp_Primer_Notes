#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template<typename T, unsigned size>
T* begin_def(T(&arr)[size])
{
	return arr;
}

template<typename T, unsigned size>
T* end_def(T (&arr)[size])
{
	return arr+size;
}

int main()
{
	string s[] = { "aa", "bb", "cc", "dd" };
	cout << *(begin_def(s)) << endl;
	cout << *(end_def(s)-1) << endl;
	return 0;
}

