#include "15.39_query.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <fstream>

int main()
{
	std::ifstream file("test.txt");
	TextQuery tQuery(file);
	Query q = Query("fieryzzz") | Query("wind");
	std::cout << q.eval(tQuery);
	return 0;
}
