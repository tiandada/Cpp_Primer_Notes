#include <iostream>
#include <regex>
#include <string>

bool valid(const std::smatch& m)
{
	if((!m[3].matched)&&(m[2].matched))
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	std::string mail = "(\\d{5})([-])?(\\d{4})?";
	std::regex r(mail);
	std::smatch m;
	std::string s;
	while(getline(std::cin, s))
	{
		for(std::sregex_iterator it(s.begin(), s.end(), r), end_it; it != end_it; ++it)
			if(valid(*it))
				std::cout << "valid: " << it->str() << std::endl;
			else
				std::cout << "not valid: " << it->str() << std::endl;

	}
	return 0;
}
