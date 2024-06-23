#include<iostream>
#include<cstring>

int main(){

    const int MAX_LENGTH = 50;
    char first_name[MAX_LENGTH];
    char last_name[MAX_LENGTH];
    char third_string[MAX_LENGTH*2 + 2];
    std::cout << "Enter your first name: ";
    std::cin.getline(first_name,MAX_LENGTH);
    std::cout << "Enter your last name: ";
    std::cin.getline(last_name,MAX_LENGTH);
    
    strcpy(third_string,last_name);
    strcat(third_string,", ");
    strcat(third_string,first_name);

    std::cout << "Here’s the information in a single string: " << third_string << "\n";

    return 0;
}