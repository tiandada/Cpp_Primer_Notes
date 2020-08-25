#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "7.11.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::unique;
using std::sort;

bool compareIsbn(const Sales_data &s1, const Sales_data &s2)
{
	return s1.isbn().size() < s2.isbn().size();
}


int main()
{
	Sales_data sd1("the"),sd2("quick"), sd3("red"), sd4("fox"), sd5("jumps");
	vector<Sales_data> sv = {sd1, sd2, sd3, sd4, sd5};
	sort(sv.begin(), sv.end(), [](const Sales_data &s1, const Sales_data &s2){return s1.isbn().size() < s2.isbn().size();});
	for (auto const &s : sv)
		cout << s.isbn() << " ";
	cout << endl;
	return 0;
}
