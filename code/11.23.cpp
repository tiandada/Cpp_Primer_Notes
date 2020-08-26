#include <iostream>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::multimap;

int main()
{
	multimap<string, string> families;
	for(string lname, cname; cin >> lname >> cname; families.emplace(lname, cname));
	for(auto const & family : families)
		cout << family.second << " " << family.first << endl;
	return 0;
}
