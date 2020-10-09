#include <iostream>
#include <regex>
#include <string>

int main()
{
	try{
		std::regex r("[[:alnum:]+\\.(cpp|cxx|cc)$", std::regex::icase);
	}
	catch(std::regex_error e)
	{
		std::cout << e.what() << "\ncode: " << e.code() << std::endl;
	}
	return 0;
}
