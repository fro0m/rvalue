#ifndef ITEM_H
#define ITEM_H


class Item
{
public:
    Item(int i);
    Item() = delete;
    Item(const Item &t_item);
    Item(Item &&t_item);
    Item& operator=(Item&& other);


    int number() const;
    void setNumber(int number);
    int &numberRef() {
        return m_number;
    }

private:
    int m_number;
};

#endif // ITEM_H
