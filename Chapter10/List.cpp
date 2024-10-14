#include "List.hpp"

List::List() : numItems(0) {}

bool List::isEmpty() const {
    return numItems == 0;
}

bool List::isFull() const {
    return numItems == MAX_SIZE;
}

bool List::addItem(const Item& item) {
    if (isFull()) {
        return false;
    }
    items[numItems++] = item;
    return true;
}

void List::visit(void (*pf)(Item&)) {
    for (int i = 0; i < numItems; ++i) {
        (*pf)(items[i]);
    }
}