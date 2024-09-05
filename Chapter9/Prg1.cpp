#include <iostream>
#include "golf.h"

int main(){

    golf player[3];

    for(int i = 0; i<3; i++){

        if(setgolf(player[i])){
            showgolf(player[i]);        
        }
        else
            break;
    }

    std::cout << "Bye!"  << std::endl;  

    return 0;
}