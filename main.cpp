#include <iostream>
#include "item.h"

using namespace std;

int main()
{
    Item item(9000);
    Item item2 = item;
    std::cout << item2.number() << "\n";
    item2 = Item(11);
    std::cout << item2.number() << "\n";
    // testing getting reference and assigning to it
    std::cout << "testing getting reference and assigning to it" << "\n";
    item.numberRef() = 500;
    auto x =  &item.numberRef();
    std::cout << (void*)x << " " << *x << "\n";

    //testing template forwarding function
    std::cout << item2.str() << "\n";
    item2.setStr("safaf");
    std::cout << item2.str() << "\n";



    return 0;
}

