#include <iostream>
#include "golf.hpp"

int main(){

    golf player[3];

    for(int i = 0; i<3; i++){

        if(player[i].setgolf()){
            player[i].showgolf();        
        }
        else
            break;
    }

    std::cout << "Bye!"  << std::endl;  

    return 0;
}