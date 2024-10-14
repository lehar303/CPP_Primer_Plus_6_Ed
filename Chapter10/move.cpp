#include "move.hpp"
#include <iostream>

Move::Move(double a, double b):x(a), y(b){};

void Move::showmove() const{
    std::cout << "(X,Y) = ( " << x << "," << y << ")" << std::endl;
}

Move Move::add(const Move &m) const{
    Move result;
    result.x = x + m.x;
    result.y = y + m.y;
    return result;
}

void Move::reset(double a, double b){
    x = a;
    y = b;
}