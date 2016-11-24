#include "item.h"
#include <iostream>

Item::Item(int i)
    : m_number(i)
{
    std::cout << "Item::Item(int i)\n";
}

Item::Item(const Item &t_item)
{
    std::cout << "Item::Item(const Item &t_item)\n";
}

Item::Item(Item &&t_item)
{
    std::cout << "Item::Item(Item &&t_item)\n";

}

