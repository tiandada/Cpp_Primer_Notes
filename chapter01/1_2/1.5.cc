#include <iostream>

int main()
{
    std::cout << "Input two numbers:";
    std::cout << std::endl;
    int v1;
    int v2;
    std::cin >> v1 >> v2;
    std::cout << "The product of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << std::endl;
    return 0;
}
