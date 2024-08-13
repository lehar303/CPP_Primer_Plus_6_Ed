#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){

    std::ifstream read_file;
    read_file.open("file.txt");

    //std::cout << "HERE" << std::endl;

    if(!read_file.is_open()){
        exit(EXIT_FAILURE);
    }

    //std::cout << "HERE2" << std::endl;

    char ch;
    int count = 0;
    //std::cout << "HERE3" << std::endl;
    read_file.get(ch);
    //std::cout << "HERE4" << std::endl;
    std::cout << ch;
    //std::cout << "HERE5" << std::endl;
    while(read_file.get(ch)){
        //read_file.get(ch);
        std::cout << ch ;
        count++;
    } 
    std::cout << std::endl;
    std::cout << "No of char: " << count << std::endl;    

    return 0;
}