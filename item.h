#ifndef ITEM_H
#define ITEM_H
#include <string>



class Item
{
public:
    Item(int i);
    Item() = delete;
    Item(const Item &t_item);
    Item(Item &&t_item);
    Item& operator=(Item&& other);



    int number() const;
    //void setNumber(int number);
    int &numberRef() {
        return m_number;
    }
    template<typename T>
    void setNumber(T&& t_number);

    std::string str() const;
    void setStr(std::__cxx11::string &&str);

private:
    int m_number;
    std::string m_str;
};

#endif // ITEM_H
