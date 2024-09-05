#include <iostream>
#include "sales.hpp"

int main(){
    
    SALES::Sales s_obj;
    SALES::Sales s_obj2;
    double array_obj[3] = {1.1,2.2,3.3};

    SALES::setSales(s_obj,array_obj,3);
    SALES::showSales(s_obj);

    SALES::setSales(s_obj2);
    SALES::showSales(s_obj2);

    return 0;
}