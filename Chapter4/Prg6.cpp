#include<iostream>
#include<string>
#include <limits>

struct CandyBar{
    std::string name;
    double weight;
    int calories;
};

int main(){

    CandyBar snacks[3];

    for(int i = 0; i<3; i++){
        std::cout << "Enter details for snack: " << i+1 << "\n";
        std::cout << "Enter name: ";
        std::getline(std::cin,snacks[i].name);
        std::cout << "Enter weight: ";
        std::cin >> snacks[i].weight;
        std::cout << "'Enter calories: ";
        std::cin >> snacks[i].calories;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "---------------------------------" <<"\n";
        
    }

    for(int i = 0;i <3; i++){
        std::cout << "Snack: " << i+1 << "\n";
        std::cout << "Name: " << snacks[i].name << "\n";
        std::cout << "Weight: " << snacks[i].weight << "'\n";
        std::cout << "Calories: " << snacks[i].calories << "\n";
        std::cout << "---------------------------------" <<"\n";

    }
    return 0;
}