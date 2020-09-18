#include <iostream>
#include <vector>
#include <list>

template<typename Container>
std::ostream& print(Container const& container, std::ostream& os)
{
	for(typename Container::size_type i = 0; i != container.size(); ++i)
		os << container[i] << " ";
	return os;
}

int main()
{
	std::vector<int> v{1, 23, 6, 4, 5, 7, 4};
	print(v, std::cout) << std::endl;
	return 0;
}
