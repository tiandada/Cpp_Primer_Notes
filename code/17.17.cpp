#include <iostream>
#include <string>
#include <regex>

int main()
{
	std::string pattern("[^c]ei");
	pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	std::regex r(pattern, std::regex::icase);
	std::string test_str;
	while(std::cin >> test_str)
	{
		for(std::sregex_iterator it(test_str.begin(), test_str.end(), r), end_it; it != end_it; ++it)
		{
			std::cout << "matched word" << " " << it->str() << std::endl;
		}
	}
	return 0;
}
