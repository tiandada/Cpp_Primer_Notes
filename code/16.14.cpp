#include "16.14.h"
#include <iostream>

int main()
{
	Screen<5, 5> scr('c');
	Screen<5, 5> scr2;
	std::cout << scr;
	std::cin >> scr2;
	std::cout << scr2;
	return 0;
}
