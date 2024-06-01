#include <iostream>

int main(){

    const int INCHES_PER_FOOT = 12;
    const double METERS_PER_INCH = 0.0254;
    const double POUNDS_PER_KG = 2.2;

    double height_feet = 0;
    double height_inches = 0;
    double weight_pounds = 0;

    std::cout << "Enter height in feet and inches: ";
    std::cin >> height_feet >> height_inches;
    std::cout << "\nEnter weight in pounds";
    std::cin >> weight_pounds;

    double height_feet_conv = height_feet * INCHES_PER_FOOT + height_inches;
    double height_meters = height_feet_conv * METERS_PER_INCH;
    double weight_kgs = weight_pounds / POUNDS_PER_KG;

    double BMI = weight_kgs/(height_meters * height_meters);

    std::cout << "BMI: " << BMI << "\n";


    return 0;
}