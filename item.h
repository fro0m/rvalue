#ifndef ITEM_H
#define ITEM_H


class Item
{
public:
    Item(int i);
    Item() = delete;
    Item(const Item &t_item);
    Item(Item &&t_item);
private:
    int m_number;
};

#endif // ITEM_H
