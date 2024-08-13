#include <iostream>
#include <iomanip>

int main(){

    char input;

    std::cout << "Please enter one of the following choices:\n" << std::endl;
    std::cout << "c) carnivore" << std::setw(20) << "p) pianist" << std::endl;
    std::cout << "t) tree" << std::setw(22) << "g) game" << std::endl;
    std::cin >> input;

    while(input != 'c' && input != 'p' && input != 't' && input != 'g'){
        std::cout << "Please enter a c, p, t, or g: " ;
        std::cin >> input;
    }

    if(input == 'c')
        std::cout << "Tiger is a carnivore\n" << std::endl;
    else if(input == 'p')
        std::cout << "Lydian Nadhaswaram is a famous Indian pianist" << std::endl;
    else if(input == 't')
        std::cout << "Maple is a tree" << std::endl;
    else
        std::cout << "Game" << std::endl;

    return 0;
}

