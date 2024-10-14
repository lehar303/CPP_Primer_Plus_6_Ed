#include <iostream>
#include <cstring>
#include "stack.hpp"

int main(){

    Stack *s1 = new Stack(Node::Item {"ABC",12.34});
    s1->push(Node::Item {"XYZ",56.78});
    s1->printStack();
    s1->push(Node::Item {"EFG",434.3});
    s1->pop();
    s1->pop();
    s1->printStack();


    return 0;
}