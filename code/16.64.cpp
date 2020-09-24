#include <iostream>
#include <vector>
#include <cstring>

template<typename T>
std::size_t count(std::vector<T> const &vec, T value)
{
	auto count = 0u;
	for(auto const &item : vec)
		if(value == item)
			++count;
	return count;
}

template<>
std::size_t count(std::vector<const char*> const &vec, const char* value)
{
	auto count = 0u;
	for(auto const &item : vec)
		if(strcmp(value,item) == 0)
			++count;
	return count;
}

int main()
{
	std::vector<double> vd{1.1, 1.2, 2.2, 3, 1.1};
	std::cout << count(vd, 1.1) << std::endl;

	std::vector<const char*> vec{ "aa", "bb", "cc", "aa" };
	std::cout << count(vec, "aa") << std::endl;

	return 0;
}
