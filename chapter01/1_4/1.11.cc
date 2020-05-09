#include <iostream>

int main()
{
    std::cout << "Input two numbers:" << std::endl;
    int i, j;
    std::cin >> i >> j;
    if(i > j)
    {
        i = i + j;
        j = i - j;
        i = i - j;
    }
    while(i <= j)
    {
        std::cout << i << std::endl;
        ++i;
    }
    return 0;
}
