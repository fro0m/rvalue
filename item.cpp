#include "item.h"
#include <iostream>
#include <utility>

Item::Item(int i)
    : m_number(i)
{
    std::cout << "Item::Item(int i)\n";
}

Item::Item(const Item &t_item)
{
    std::cout << "Item::Item(const Item &t_item)\n";
    //m_number = t_item.m_number;
    m_number = std::move(t_item.m_number);

}

Item::Item(Item &&t_item)
{
    std::cout << "Item::Item(Item &&t_item)\n";
    //m_number = t_item.m_number;
    m_number = std::move(t_item.m_number);

}

Item &Item::operator=(Item &&other) {
    std::cout << "Item &Item::operator=(Item &&other)\n";
    m_number = std::move(other.m_number);
    return *this;
}

int Item::number() const
{
    return m_number;
}

void Item::setNumber(int number)
{
    m_number = number;
}

