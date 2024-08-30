#include <iostream>
#include <algorithm>

void convert(std::string &s){
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
}

int main(){

    std::string input;    

    while(true){
        std::cout << "Enter a string (q to quit): ";
        std::cin >> input;
        if(input == "q")
            break;
        convert(input);
        std::cout << input << std::endl;        
    }

    std::cout << "Bye!" << std::endl;

    return 0;
}