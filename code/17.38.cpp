#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
	std::ifstream myfile("test.txt");
	char sink[200];
	while(myfile.getline(sink, 200, ' '))
		std::cout << sink << std::endl;
	return 0;
}
