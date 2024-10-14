#include <iostream>
#include "Plorg.hpp"

int main(){

    Plorg p1;
    p1.report();
    p1.updateCI(75);
    p1.report();
    Plorg p2("ABC",3);
    p2.report();
    
    return 0;
}