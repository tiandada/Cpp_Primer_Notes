#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	cout << left << setw(15) << "default format:" << setw(25) << right << 100 * std::sqrt(2.0) << '\n'
	     << left << setw(15) << "scientific:" << setw(25) << scientific << right << 100 * std::sqrt(2.0) << '\n'
	     << left << setw(15) << "fixed decimal:" << setw(25) << fixed << right << 100 * std::sqrt(2.0) << '\n'
	     << left << setw(15) << "hexadecimal:" << setw(25) << uppercase << hexfloat << right <<  100 * std::sqrt(2.0) << '\n'
	     << left << setw(15) << "use defaults:" << setw(25) << defaultfloat << right <<  100 * std::sqrt(2.0)
	     << "\n\n";
	return 0;
}
