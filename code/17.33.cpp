#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <random>
#include <ctime>
#include <utility>

int main()
{
	typedef std::pair<std::string, std::string> ps;
	std::ifstream i("words.txt");
	std::vector<ps> dict;
	std::string str1, str2;
	while(i >> str1 >> str2)
		dict.emplace_back(str1, str2);
	i.close();
	std::sort(dict.begin(), dict.end(), [](const ps &_ps1, const ps &_ps2){ return _ps1.first < _ps2.first; });
	i.open("rule.txt");
	std::default_random_engine e(std::time(0));
	while(i >> str1)
	{
		std::vector<ps>::const_iterator it = std::find_if(dict.cbegin(), dict.cend(),[&str1](const ps &_ps){ return _ps.first == str1; });
		if(it == dict.cend())
			std::cout << str1 << " ";
		else
		{
			std::uniform_int_distribution<unsigned> u(0, std::find_if(dict.cbegin(), dict.cend(), [&str1](const ps &_ps){ return _ps.first > str1; }) - it - 1);
			std::cout << (it + u(e))->second << " ";
		}
	}
	
	return 0;
}
