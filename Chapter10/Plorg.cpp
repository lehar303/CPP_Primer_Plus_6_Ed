#include "Plorg.hpp"
#include <iostream>

Plorg::Plorg(std::string name_, int idx):name(name_),CI(idx){}

void Plorg::updateCI(int value){
    CI = value;
}

void Plorg::report(){
    std::cout << "Name: " << name << std::endl;
    std::cout << "CI: " << CI << std::endl;
}

