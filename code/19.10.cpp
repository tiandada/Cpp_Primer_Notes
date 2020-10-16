#include <iostream>
#include <typeinfo>

class A {
public:
	virtual ~A() { }
};
class B : public A { };
class C : public B { };

int main()
{
	A *pa = new C;
	std::cout << typeid(pa).name() << std::endl;
	C cobj;
	A& ra1 = cobj;
	std::cout << typeid(&ra1).name() << std::endl;
	B *px = new B;
	A& ra = *px;
	std::cout << typeid(ra).name() << std::endl;
	return 0;
}
