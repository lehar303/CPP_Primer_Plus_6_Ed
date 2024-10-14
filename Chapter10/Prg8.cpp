#include "List.hpp"
#include <iostream>

void printItem(Item& item) {
    std::cout << item << " ";
}

void doubleItem(Item& item) {
    item *= 2;
}

int main() {
    List myList;

    std::cout << "Is the list empty? " << (myList.isEmpty() ? "Yes" : "No") << std::endl;

    for (int i = 1; i <= 5; ++i) {
        myList.addItem(i);
    }

    std::cout << "Is the list empty? " << (myList.isEmpty() ? "Yes" : "No") << std::endl;
    std::cout << "Is the list full? " << (myList.isFull() ? "Yes" : "No") << std::endl;

    std::cout << "List contents: ";
    myList.visit(printItem);
    std::cout << std::endl;

    myList.visit(doubleItem);

    std::cout << "List contents after doubling: ";
    myList.visit(printItem);
    std::cout << std::endl;

    return 0;
}