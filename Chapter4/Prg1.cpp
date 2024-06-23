#include<iostream>
#include<string>

int main(){

    std::string first_name;
    std::string last_name;
    char grade;
    int age;

    std::cout << "What is your first name? ";
    std::getline(std::cin,first_name);
    std::cout << "What is your last name? ";
    std::getline(std::cin,last_name);
    std::cout << "What letter grade do you deserve? ";
    std::cin >> grade;
    std::cout << "What is your age? ";
    std::cin >> age;
    std::cout << "Name: " << last_name << ", " << first_name << "\n" << "Grade: " << grade << "\n" << "Age: " << age << "\n";



    return 0;
}