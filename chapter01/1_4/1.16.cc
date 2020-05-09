#include <iostream>

int main()
{
    int val, sum = 0;
    while(std::cin >> val)
    {
        sum = sum + val;
    }
    std::cout << std::endl;
    std::cout << "Sum is:" << sum << std::endl;
    return 0;
}
