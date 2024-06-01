#include<iostream>

int main(){

    double km,litres;

    std::cout << "Enter distance in km: ";
    std::cin >> km;
    std::cout << "\nEnter petrol consumed in litres: ";
    std::cin >> litres;

    double output = (litres/km) * 100;

    std::cout << output << "\n";

    return 0;
}