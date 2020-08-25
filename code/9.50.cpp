#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> vec = {"1.2", "2", "3", "4", "5", "6", "7", "8", "9"};
	int sum = 0;
	for (auto const& i : vec)
	{
		sum += std::stoi(i);
	}
	cout << sum << endl;
	double su = 0.0;
	for (auto const& i : vec)
	{
		su += std::stod(i);
	}
	cout << su << endl;
	return 0;
}
