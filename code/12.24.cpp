#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	cout << "input how long do you want the string? ";
	int size{ 0 };
	cin >> size;
	char *input = new char[size + 1]();
	cin.ignore();
	cout << "input the string: ";
	cin.get(input, size+1);
	cout << input << endl;
	delete [] input;
	return 0;
}
