#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

int main()
{
	auto data = {2, 3, 4, 5};
	int input;
	std::cin >> input;
	std::modulus<int> mod;
	auto predicator = [&](int i){ return 0 == mod(input, i); };
	auto is_divisible = std::any_of(data.begin(), data.end(), predicator);
	std::cout << (is_divisible ? "yes" : "no") << std::endl;
	return 0;
}
