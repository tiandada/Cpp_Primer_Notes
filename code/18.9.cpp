#include <iostream>
#include <string>
#include <algorithm>
#include "18.9_sales.h"

int main()
{
	Sales_data sd1("001-1", 1, 10.0);
	Sales_data sd2("001-1", 2, 9.9);
	Sales_data sd3("001-2", 1, 11.0);
	try {
		auto sum = sd1 + sd3;
	} catch(const isbn_mismatch &e) {
		std::cerr << e.what() << ": left isbn(" << e.left << ") right isbn("  << e.right << ")" << std::endl;
	}
	return 0;
}
