#include <iostream>

int main()
{
	int i = 0;
	double *dp = &i;
	int *ip = i;
	int *p = &i;
	std::cout << *dp << *ip << *p << std::endl;
	return 0;
}

