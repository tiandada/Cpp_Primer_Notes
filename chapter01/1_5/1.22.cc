#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sum, item;
    if(std::cin>>sum)
    {
        while(std::cin>>item)
        {
            if(item.isbn() == sum.isbn())
                sum = sum + item;
            else
            {
                std::cout << sum << std::endl;
                sum = item;
            }
        }
        std::cout << sum << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
