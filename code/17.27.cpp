#include <iostream>
#include <regex>
#include <string>

int main()
{
	std::string mail = "(\\d{5})([-])?(\\d{4})?\\b";
	std::regex r(mail);
	std::smatch m;
	std::string s;
	std::string fmt = "$1-$3";
	while(getline(std::cin, s))
	{
		std::cout << std::regex_replace(s, r, fmt) << std::endl;
	}
	return 0;
}
