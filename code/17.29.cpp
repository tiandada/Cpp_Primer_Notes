#include <iostream>
#include <random>

unsigned ran(unsigned seed)
{
	static std::default_random_engine e(seed);
	static std::uniform_int_distribution<unsigned> u;
	return u(e);
}

int main()
{
	unsigned i;
	while(std::cin >> i)
		std::cout << ran(i) << std::endl;
	return 0;
}
