#include "stack.hpp"
#include <iostream>

double Stack::total = 0;

Stack::Stack(Node value){
    Node* newNode = new Node(value);
    top = newNode;
    height = 1;
}

void Stack::printStack(){
    std::cout << "*********INFO***************" << std::endl;
    Node *temp = top;
    while(temp){
        std::cout << temp->value.fullname << std::endl;
        std::cout << temp->value.payment << std::endl;
        temp = temp->next;
    }
    std::cout << "*********END***************" << std::endl;
}

void Stack::push(Node::Item num){
    Node *newNode = new Node(num);
    newNode->next = top;
    top = newNode;
    height++;
}

Node::Item Stack::pop(){
    
    Node *temp = top;
    Node::Item poppedVal  = top->value;
    total += top->value.payment;
    std::cout << "Running Total: " << total << std::endl;
    top = top->next;
    delete temp;
    height--;
    return poppedVal;
}