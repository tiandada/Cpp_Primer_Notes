#include <iostream>
#include <memory>
#include <string>
#include <string.h>

using std::cout;
using std::endl;
using std::string;

int main()
{
	char *arr = new char[30];
	strcat(arr, "hello");
	strcat(arr, "word");
	cout << arr << endl;
	delete [] arr;

	string s1("hello"), s2("word");
	cout << s1 + s2 << endl;
	return 0;
}
