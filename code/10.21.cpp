#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int i = 3;
	auto r = [&i]() -> bool {if(i > 0) {--i; return false;} if(i == 0) return true; };
	while(!r())
		cout << i << " ";
	cout << i << endl;
	return 0;
}
