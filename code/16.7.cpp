#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template<typename T, unsigned size>
constexpr unsigned getSize(const T(&)[size])
{
	return size;
}

int main()
{
	string s[] = { "sss" };
	cout << getSize(s) << endl;
	return 0;
}
