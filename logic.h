#ifndef LOGIC_H
#define LOGIC_H

void doSmth(const Item &t_item)
{
    std::cout << "void doSmth(const Item &t_item)\n";
    //m_number = t_item.m_number;
    m_number = std::move(t_item.m_number);

}

#endif // LOGIC_H
