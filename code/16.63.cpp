#include <iostream>
#include <vector>
#include <string>

template<typename T>
std::size_t count(std::vector<T> const &vec, T value)
{
	auto count = 0u;
	for(auto const &item : vec)
		if(value == item)
			++count;
	return count;
}

int main()
{
	std::vector<double> vd{1.1, 1.2, 2.2, 3, 1.1};
	std::cout << count(vd, 1.1) << std::endl;

	return 0;
}
