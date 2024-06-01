#include<iostream>

int main(){

    double consum_eu,consum_us;

    std::cout << "Enter consumptioin l per 100 km: ";
    std::cin >> consum_eu;
    std::cout << "\n";

    //double km_per_litre = 100/consum_eu;
    //double litres_per_km = consum_eu/100;

    double gallons = consum_eu/3.875;

    consum_us = 62.14/gallons;

    std::cout << consum_us << "\n";

    return 0;
}