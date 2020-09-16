#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "15.39_query.h"

using std::cout;
using std::endl;

int main()
{
	std::ifstream fin("test.txt");
	TextQuery text(fin);
	auto q = ~Query("Alice");
	
	auto result = q.eval(text);
	cout <<(cout, result);
	cout << endl;
	cout <<(cout, result, -3, 5);
	cout << endl;
	cout <<(cout, result, 3, 5);
	cout << endl;
	cout <<(cout, result, 3, 20);
	cout << endl;
	
    return 0;
}
