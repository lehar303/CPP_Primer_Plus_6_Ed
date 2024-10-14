#include <iostream>
#include "Sales.hpp"

int main(){
    
    SALES::Sales s_obj;
    
    double array_obj[3] = {1.1,2.2,3.3};

    s_obj.setSales();
    s_obj.showSales();

    SALES::Sales s_obj2(array_obj,3);    
    s_obj2.showSales();

    return 0;
}