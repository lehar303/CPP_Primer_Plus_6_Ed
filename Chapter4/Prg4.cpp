#include<iostream>
#include<string>

int main(){

    std::string first_name;
    std::string last_name;
    std::string third_string;

    std::cout << "Enter your first name: ";
    std::getline(std::cin,first_name);
    std::cout << "Enter your last name: ";
    std::getline(std::cin,last_name);

    third_string = last_name + ", " + first_name;

    std::cout << "Here’s the information in a single string: " << third_string;

    return 0;
}