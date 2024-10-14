#ifndef LIST_HPP
#define LIST_HPP

typedef int Item; 

class List {
private:
    static const int MAX_SIZE = 100;
    Item items[MAX_SIZE];
    int numItems;

public:
    List(); 
    bool isEmpty() const;
    bool isFull() const;
    bool addItem(const Item& item);
    void visit(void (*pf)(Item&));
};

#endif 