#include <iostream>
#include <memory>
#include <string>

void func_rvalue(int&& lhs, int&& rhs)
{
	std::allocator<int> alloc;
	int* data(alloc.allocate(3));
	alloc.construct(data, lhs);
	alloc.construct(data+1, 0);
	alloc.construct(data+2, rhs);
	for(auto p = data; p != data + 3; ++p)
		std::cout << *p << "\n";
	for(auto p = data+3; p != data;)
		alloc.destroy(--p);
	alloc.deallocate(data, 3);
}

template<typename F, typename T1, typename T2>
void flip(F f, T1&& t1, T2&& t2)
{
	f(std::forward<T2>(t2), std::forward<T1>(t1));
}

int main()
{
	flip(func_rvalue, 99, 88);
	return 0;
}
