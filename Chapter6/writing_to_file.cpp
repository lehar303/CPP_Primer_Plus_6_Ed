#include <iostream>
#include <fstream>

int main(){

    std::ofstream file_write;
    char filename[50];
    char line[81] = "Objects are closer than they appear.";

    std::cout << "Enter name of file: ";
    std::cin >> filename;

    file_write.open(filename);
    file_write << line << std::endl;


    return 0;
}