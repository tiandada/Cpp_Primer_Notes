#include <iostream>
#include <memory>
#include <string>

template<typename T, typename... Args>
auto make_shared(Args&&... args) -> std::shared_ptr<T>
{
	return std::shared_ptr<T>(new T(std::forward<Args>(args)...));
}

class Foo {
public:
	explicit Foo(int b) : bar(b) { }
	int bar;
};

int main()
{
	auto num = make_shared<int>(42);
	std::cout << *num << std::endl;
	auto str = make_shared<std::string>(10, 'c');
	std::cout << *str << std::endl;
	auto foo = make_shared<Foo>(99);
	std::cout << foo->bar << std::endl;
	return 0;
}
