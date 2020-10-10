#include <iostream>
#include <random>

unsigned ran(unsigned seed, unsigned min, unsigned max)
{
	static std::default_random_engine e(seed);
	static std::uniform_int_distribution<unsigned> u(min, max);
	return u(e);
}

int main()
{
	unsigned i;
	while(std::cin >> i)
		std::cout << ran(i, 1, 10) << std::endl;
	return 0;
}
