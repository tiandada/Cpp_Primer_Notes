#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

int main()
{
	std::vector<std::string> sv = { "a", "b", "", "c", "" };
	std::function<bool (const std::string&)> fcn = &std::string::empty;
	auto it = std::find_if(sv.begin(), sv.end(), fcn);
	std::cout << it - sv.begin() << std::endl;

	auto it2 = std::find_if(sv.begin(), sv.end(), std::mem_fn(&std::string::empty));
	std::cout << it2 - sv.begin() << std::endl;

	auto it3 = std::find_if(sv.begin(), sv.end(), std::bind(&std::string::empty, std::placeholders::_1));
	std::cout << it3 - sv.begin() << std::endl;

	std::cout << std::count_if(sv.begin(), sv.end(), fcn) << std::endl;

	return 0;
}
