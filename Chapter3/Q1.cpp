#include <iostream>

int main(){

    const int INCHES_PER_FOOT = 12;

    int height_inches =0;
    int height_feet = 0;
    int height_inches_conv = 0;

    std::cout << "Enter your height in inches: " << "\n";
    std::cin >> height_inches;

    height_feet = height_inches / INCHES_PER_FOOT;
    height_inches_conv = height_inches % INCHES_PER_FOOT;

    std::cout << "Your height is: " << height_feet << " ft and " << height_inches_conv << " in" << "\n"; 

    return 0;
}