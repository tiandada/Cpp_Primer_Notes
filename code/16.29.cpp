#include "16.29_shared_pointer.h"
#include "16.28_unique_pointer.h"
#include "16.29_blob.h"
#include "16.28_delete.h"
#include "16.21.h"
#include <iostream>
#include <memory>
#include <vector>
#include <functional>
#include <string>

int main()
{
	Blob<std::string> b;
	b.push_back("sss");
	b[0] = "zzz";
	std::cout << b[0] << std::endl;
	return 0;
}
