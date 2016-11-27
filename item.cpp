#include "item.h"
#include <iostream>
#include <utility>

Item::Item(int i)
    : m_number(i)
{
    std::cout << "Item::Item(int i)\n";
}


Item::Item(const Item &t_item)
    : m_number(t_item.m_number)
{
    std::cout << "Item::Item(const Item &t_item)\n";
    //m_number = t_item.m_number;
    //m_number = std::move(t_item.m_number);

}

// argument has type of Item && (non const) because
// moving the object supposes its changing
Item::Item(Item &&t_item)
    : m_number(std::move(t_item.m_number))
{
    std::cout << "Item::Item(Item &&t_item)\n";
    //m_number = t_item.m_number;
    //m_number = std::move(t_item.m_number);

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

std::string Item::str() const
{
    return m_str;
}

void Item::setStr(std::__cxx11::string &&str)
{
    std::cout << "void Item::setNumber(T&& t_number)\n";
    m_str = std::forward<std::string>(str);}

template<typename T>
void Item::setNumber(T&& t_number) {
    std::cout << "void Item::setNumber(T&& t_number)\n";
    m_number = std::forward<T>(t_number);
}
//void Item::setNumber(int number)
//{
//    m_number = number;
//}

