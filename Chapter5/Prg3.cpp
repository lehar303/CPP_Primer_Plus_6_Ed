#include<iostream>

int main(){

    int number, sum = 0;

    do{
        std::cout << "Enter a number (0 to exit): ";
        std::cin >> number;
        sum = sum + number;
        std::cout << "Sum: " << sum << "\n";
    }while(number != 0);

    

    return 0;
}