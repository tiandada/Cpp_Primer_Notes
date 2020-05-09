#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currItem, item;
    int cnt;
    if(std::cin >> currItem)
    {
        cnt = 1;
        while(std::cin >> item)
        {
            if(currItem.isbn() == item.isbn())
                ++cnt;
            else
            {
                std::cout << currItem.isbn() << " occurs " <<  cnt << " times" << std::endl;
                currItem = item;
                cnt = 1;
            }
        }
        std::cout << currItem.isbn() << " occurs " << cnt << " times" << std::endl;
    }
}
