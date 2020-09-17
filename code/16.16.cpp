#include "16.16.h"
#include <vector>
#include <iostream>

int main()
{
	Vec<int> v = {1, 2, 3, 4, 5};
	Vec<int> v2;
	v2 = v;
	std::cout << v2.capacity() << std::endl;
	v2.push_back(99);
	v2.resize(2, 2);
	for(auto t : v2)
		std::cout << t << " ";
	std::cout << v2.capacity() << std::endl;
	return 0;
}

