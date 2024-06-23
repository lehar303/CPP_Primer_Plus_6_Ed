#include<iostream>
#include<limits>

struct Pizza{
    std::string name;
    double diameter;
    double weight;
};

int main(){

    Pizza *p1 = new Pizza;
    
    std::cout << "Enter the diameter: ";
    std::cin >> p1->diameter;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << "Enter the name: ";
    std::getline(std::cin,p1->name);
    std::cout << "Enter the weight: ";
    std::cin >> p1->weight;

    std::cout << "Name: " << p1->name << "\n" << "Diameter: " << p1->diameter << "\n" << "Weight: " << p1->weight << "\n";

    return 0;
}