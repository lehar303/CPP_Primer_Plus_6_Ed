#include<iostream>
#include<limits>

struct car{
    std::string car;
    int make;
};

int main(){

    int catalogue_cars;

    std::cout << "How many cars do you wish to catalog? ";
    std::cin >> catalogue_cars;
    

    car *cars = new car[catalogue_cars];
    for(int i = 0; i< catalogue_cars; i++){
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Car #" << i+1 << "\n";
        std::cout << "Please enter the make: ";
        std::getline(std::cin, cars[i].car);
        std::cout << "Please enter the year made: ";
        std::cin >> cars[i].make;
    }

    std::cout << "Here is your collection:" << "\n";
    for(int i = 0; i<catalogue_cars; i++){
        std::cout << cars[i].make << " " << cars[i].car << "\n";
    }

    return 0;
}