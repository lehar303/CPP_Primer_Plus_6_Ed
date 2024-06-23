#include<iostream>
#include<string>

struct CandyBar{
    std::string name;
    double weight;
    int calories;
};

int main(){

    /*CandyBar snack;
    snack.name = "Mocha Munch";
    snack.weight = 2.3;
    snack.calories = 350;*/

    CandyBar snack = {"Mocha Munch", 2.3, 350};

    std::cout << snack.name << "\n" << snack.weight << "\n" <<snack.calories << "\n";

    return 0;
}