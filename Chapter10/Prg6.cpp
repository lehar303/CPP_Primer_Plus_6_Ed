#include <iostream>
#include "move.hpp"

int main(){

    Move obj1(1,2);
    Move obj2(2,3);
    obj1.showmove();
    obj1.add(obj2).showmove();
    obj2.reset();
    obj2.showmove();    
}