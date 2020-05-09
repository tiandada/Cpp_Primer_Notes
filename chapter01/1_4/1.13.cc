#include <iostream>


int main()
{
    std::cout << "======1.9 ======" << std::endl;
    int sum = 0;
    for(int val = 50;val <= 100;++val)
    {
        sum = sum + val;
    }
    std::cout << "Sum of 50 to 100 inclusive is "
        << sum << std::endl;
    std::cout << "======1.10======" << std::endl;
    std::cout << "From 0 to 10:" << std::endl;
    for(int i = 10;i >= 0;--i)
    {
        std::cout << i << std::endl;
    }
    std::cout << "======1.11======" << std::endl;
    std::cout << "Input two numbers:" << std::endl;
    int a, b;
    std::cin >> a >> b;
    for(;a<=b;++a)
    {
        std::cout << a << std::endl;
    }
    return 0; 
}
