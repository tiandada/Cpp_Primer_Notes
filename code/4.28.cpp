#include <iostream>
#include <string>

using namespace std;

int main()
{
	// void type
	cout << "nullptr: " << sizeof(nullptr_t) << "bytes" << endl;

	// boolean type
	cout << "bool: " << sizeof(bool) << "bytes" << endl;

	// charactor type
	cout << "char: " << sizeof(char) << "bypes" << endl;
	cout << "wchar_t: " << sizeof(wchar_t) << "bytes" << endl;
	cout << "char16_t: " << sizeof(char16_t) << "bytes" << endl;
	cout << "char32_t: " << sizeof(char32_t) << "bytes" << endl;

	// integers type
	cout << "short: " << sizeof(short) << "bytes" << endl;
	cout << "int: " << sizeof(int) << "bytes" << endl;
	cout << "long: " << sizeof(long) << "bytes" << endl;
	cout << "long int: " << sizeof(long int) << "bytes" << endl;

	// float type
	cout << "float: " << sizeof(float) << "bytes" << endl;
	cout << "double: " << sizeof(double) << "bytes" << endl;
	cout << "long double: " << sizeof(long double) << "bytes" << endl;
	return 0;
}
