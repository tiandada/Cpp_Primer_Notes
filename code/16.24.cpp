#include <iostream>
#include <vector>
#include <memory>
#include "16.24_blob.h"

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	Blob<int> b(v.begin(), v.end());
	return 0;
}
