#include <iostream>
#include <string>
#include <regex>
#include <vector>

bool valid(const std::smatch &m)
{
	if(m[1].matched)
		return m[3].matched && (m[4].matched == 0 || m[4].str() == " ");
	else
		return !m[3].matched && m[4].str() == m[7].str();
}

int main()
{
	std::string phone = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})";
	std::regex r(phone);
	std::smatch m;
	std::string s;
	std::string fmt = "$2.$5.$7";
	while(getline(std::cin, s))
	{
		std::vector<std::string> sv;
		for(std::sregex_iterator it(s.begin(), s.end(), r), end_it; it != end_it; ++it)
			if(valid(*it))
				sv.push_back(it->str());
		if(sv.size() == 0)
		{
			std::cout <<  "no match" << std::endl;
		}
		else if(sv.size() == 1)
		{
			std::cout << sv[0] << std::endl;
		}
		else if(sv.size() > 1)
		{
			for(int i = 1; i < sv.size(); ++i)	
				std::cout << sv[i] << " ";
			std::cout << std::endl;
		}
	}
	return 0;
}
