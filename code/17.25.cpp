#include <iostream>
#include <string>
#include <regex>

int main()
{
	std::string phone = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})";
	std::regex r(phone);
	std::smatch m;
	std::string s;
	std::string fmt = "$2.$5.$7";
	while(getline(std::cin, s))
	{
		std::regex_search(s, m, r);
		if(!m.empty())
		{
			std::cout << m.prefix() << m.format(fmt) << std::endl;
		}
		else
		{
			std::cout << "no match" << std::endl;
		}
	}
	return 0;
}
