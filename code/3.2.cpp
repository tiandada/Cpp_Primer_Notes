#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string line;
	while(getline(cin, line))
	//while(cin >> line)
		cout << line << endl;
	return 0;
}
