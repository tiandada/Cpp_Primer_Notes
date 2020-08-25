#include <iostream>

int main()
{
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.14159;
	std::cout << r2 << "  " << d << std::endl;
	r2 = r1;
	std::cout << r2 << " "  << d << std::endl;
	i = r2;
	std::cout << i << "  "  << r1 << std::endl;
	r1 = d;
	std::cout << i << "  " << r1 << std::endl;
	int j, &rj = j;
	j = 5; rj = 10;
	std::cout << j << " " << rj << std::endl;
	return 0;
}
