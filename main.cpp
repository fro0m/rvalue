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
    item.numberRef() = 500;
    auto x =  &item.numberRef();
    std::cout << (void*)x << " " << *x << "\n";

    return 0;
}

