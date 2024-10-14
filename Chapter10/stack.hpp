#ifndef STACK_HPP
#define STACK_HPP

#include "node.hpp"

class Stack{
    public:

    Stack(Node value);
    void printStack();
    void push(Node::Item num);
    Node::Item pop();
    static double total;

    private:
    int height;
    Node *top;
};
#endif