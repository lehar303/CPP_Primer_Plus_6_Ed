#include <iostream>

struct numbers{
    int x;
    int y;
};

double harmonic_mean(struct numbers n){
    double result;
    result = (2.0 * n.x * n.y) / (n.x + n.y);
    return result;
}

int main(){

    numbers input;
    double answer = 0;

    do{
        std::cout << "Enters a pair of numbers: ";
        std::cin >> input.x >> input.y; 
        answer = harmonic_mean(input);
        std::cout << "Result: " << answer << std::endl;

    }while(input.x != 0 || input.y != 0);

    return 0;
}