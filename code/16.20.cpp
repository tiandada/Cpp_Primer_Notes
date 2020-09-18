#include <iostream>
#include <vector>

template<typename Container> 
std::ostream& print(Container const& container, std::ostream &os)
{
	for(auto curr = container.cbegin(); curr != container.cend(); ++curr)
		os << *curr << " ";
	return os;
}

int main()
{
	std::vector<int> v{1, 23, 6, 4, 5, 7, 4};
	print(v, std::cout) << std::endl;
	return 0;
}
