#ifndef NODE_HPP
#define NODE_HPP

class Node
{
public:
    struct customer
    {
        char fullname[35];
        double payment;
    };

    typedef customer Item;
    //typedef unsigned long Item;

    Node(Item value);

public:
    Node *next;
    Item value;
};
#endif