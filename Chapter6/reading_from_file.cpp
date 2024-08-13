#include <iostream>
#include <fstream>

int main(){

    std::ifstream file_read;
    char ch[50];
    char line[100];
    std::cout << "Enter the file name: ";
    std::cin >>ch;

    file_read.open(ch);
    file_read.get(line,100);

    std::cout << line << "'\n";

    return 0;
}