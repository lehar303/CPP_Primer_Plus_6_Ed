#include <iostream>
#include <cctype>

int main(){

    char input;

    while(std::cin.get(input) && input !='@'){
        if(!isdigit(input)){
            if(isupper(input)){
                std::cout << static_cast<char>(tolower(input));
            }
            else{
                std::cout << static_cast<char>(tolower(input));
            }
        }
    }

    return 0;
}