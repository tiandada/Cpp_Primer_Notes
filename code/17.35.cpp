#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	std::cout << "default format: " << 100 * std::sqrt(2.0) << '\n'
		  << "scientific: " << scientific << 100 * std::sqrt(2.0) << '\n'
		  << "fixed decimal: " << fixed << 100 * std::sqrt(2.0) << '\n'
		  << "hexadecimal: " << uppercase << hexfloat << 100 * std::sqrt(2.0) << '\n'
		  << "use defaults: " << defaultfloat << 100 * std::sqrt(2.0)
		  << "\n\n";
	return 0;
}
