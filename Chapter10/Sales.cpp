#include "Sales.hpp"
#include <iostream>
#include <numeric>
#include <algorithm>

SALES::Sales::Sales(){
    for(int i = 0; i<QUARTERS; i++){
        employee.sales[i] = 0;
    }
    employee.average = 0;
    employee.min = 0;
    employee.max = 0;
}


SALES::Sales::Sales(const double ar[], int n){
    int less = n < 4 ? n : 4;
    for(int i = 0; i<less; i++){
        employee.sales[i] = ar[i];
    }

    if(n < 4){
        for(int i = n; i<4; i++)
            employee.sales[i] = 0;
    }


    double sum = std::accumulate(employee.sales,employee.sales + less,0.0);
    employee.average = sum/static_cast<double>(less);
    employee.max = ar[0];
    employee.min = ar[0];

    for(int i = 0; i < n;i ++){
        if(ar[i] < employee.min)
            employee.min = ar[i];
        if(ar[i] > employee.max)
            employee.max = ar[i];
    }
}

void SALES::Sales::setSales(){
    int quarters;
    std::cout << "Enter the number of quarters for sales (less than 4): ";
    std::cin >> quarters;
    int less = quarters < 4 ? quarters : 4;
    double array[less];
    for(int i = 0; i< less; i++){
        std::cout << "Enter the sales for: " << i + 1 << "st quarter" << std::endl;
        std::cin >> array[i];
    }

     if(quarters < 4){
        for(int i = quarters; i<4; i++)
            array[i] = 0;
    }

    /*double sum = std::accumulate(s.sales,s.sales + less,0.0);
    s.average = sum/static_cast<double>(less);
    s.max = s.sales[0];
    s.min = s.sales[0];

    for(int i = 0; i < less;i ++){
        if(s.sales[i] < s.min)
            s.min = s.sales[i];
        if(s.sales[i] > s.max)
            s.max = s.sales[i];
    }*/

    *this = Sales(array,less);

}

void SALES::Sales::showSales(){

    for(int i = 0; i< 4; i++){
        std::cout << "Quarter[" << i+1 << "] sale: " << employee.sales[i] << std::endl;
    }
    std::cout << "Average sales: " << employee.average << std::endl;
    std::cout << "Minimum sale: " << employee.min << std::endl;
    std::cout << "Maximum sale: " << employee.max << std::endl;
}