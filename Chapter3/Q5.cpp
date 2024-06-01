#include<iostream>

int main(){

    long long world_pop;
    long long us_pop;

    std::cout << "Enter the world's population: ";
    std::cin >> world_pop;
    std::cout << "\nEnter the population of the US: ";
    std::cin >> us_pop;

    double percent = (static_cast<double>(us_pop)/static_cast<double>(world_pop)) * 100;

    std::cout << "The population of the US is " << percent << "% of the world population" << "\n"; 

    return 0;
}