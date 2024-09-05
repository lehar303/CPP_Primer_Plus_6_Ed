#include "sales.hpp"
#include <iostream>
#include <numeric>
#include <algorithm>


void SALES::setSales(Sales &s, const double ar[], int n){
    int less = n < 4 ? n : 4;
    for(int i = 0; i<less; i++){
        s.sales[i] = ar[i];
    }

    if(n < 4){
        for(int i = n; i<4; i++)
            s.sales[i] = 0;
    }


    double sum = std::accumulate(s.sales,s.sales + less,0.0);
    s.average = sum/static_cast<double>(less);
    s.max = ar[0];
    s.min = ar[0];

    for(int i = 0; i < n;i ++){
        if(ar[i] < s.min)
            s.min = ar[i];
        if(ar[i] > s.max)
            s.max = ar[i];
    }
}

void SALES::setSales(Sales &s){
    int quarters;
    std::cout << "Enter the number of quarters for sales (less than 4): ";
    std::cin >> quarters;
    int less = quarters < 4 ? quarters : 4;
    for(int i = 0; i< less; i++){
        std::cout << "Enter the sales for: " << i + 1 << "st quarter" << std::endl;
        std::cin >> s.sales[i];
    }

     if(quarters < 4){
        for(int i = quarters; i<4; i++)
            s.sales[i] = 0;
    }

    double sum = std::accumulate(s.sales,s.sales + less,0.0);
    s.average = sum/static_cast<double>(less);
    s.max = s.sales[0];
    s.min = s.sales[0];

    for(int i = 0; i < less;i ++){
        if(s.sales[i] < s.min)
            s.min = s.sales[i];
        if(s.sales[i] > s.max)
            s.max = s.sales[i];
    }

}

void SALES::showSales(const Sales &s){

    for(int i = 0; i< 4; i++){
        std::cout << "Quarter[" << i+1 << "] sale: " << s.sales[i] << std::endl;
    }
    std::cout << "Average sales: " << s.average << std::endl;
    std::cout << "Minimum sale: " << s.min << std::endl;
    std::cout << "Maximum sale: " << s.max << std::endl;
}