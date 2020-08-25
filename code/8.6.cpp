#include "7.11.h"
#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv)
{
	std::ifstream input(argv[1]);

	Sales_data total;
	if (read(input, total))
	{
		Sales_data trans;
		while(read(input, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		std::cerr << "No data?!" << endl;
	}	
	return 0;

}
