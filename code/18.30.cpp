#include <iostream>

class Class {
};

class Base : public Class {
public:
	Base() { std::cout << "Base()" << std::endl; }
	Base(int) { std::cout << "Base(int)" << std::endl; }
	Base(const Base &b) { } 
};

class D1 : virtual public Base {
public:
	D1() = default;
	D1(int i) : Base(i) { std::cout << "D1(int)" << std::endl; }
	D1(const D1 &d) { }
};

class D2 : virtual public Base {
public:
	D2() = default;
	D2(int i) : Base(i) { std::cout << "D2(int)" << std::endl; }
	D2(const D2 &d) { }
};

class MI : public D1, public D2 {
public:
	MI() = default;
	MI(int i) : D1(i), D2(i) { std::cout << "MI(int)" << std::endl; }
	MI(const MI &m) { }
};

class Final : public MI, public Class {
public:
	Final() = default;
	Final(int i) : MI(i), Base(i) { std::cout << "Final(int)" << std::endl; }
	Final(const Final &f) { }
};

int main()
{
	Final f(1);
	return 0;
}
