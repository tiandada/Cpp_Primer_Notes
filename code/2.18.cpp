#include <iostream>

int main()
{
	int i = 10;
	int *pi = &i;
	*pi = 9;
	std::cout << i << std::endl;
	int j = 20;
	std::cout << pi << std::endl;
	pi = &j;
	std::cout << pi << std::endl;
	return 0;
}
