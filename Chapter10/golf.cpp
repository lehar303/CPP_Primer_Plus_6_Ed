#include "golf.hpp"
#include <cstring>
#include <iostream>
#include <limits>

golf::golf(const char *name, int hc){
    strncpy(player.fullname,name,40);
    player.handicap = hc;
}

golf::golf() {
        player.fullname[0] = '\0';
        player.handicap = 0;
    }

int golf::setgolf(){
    char name[Len];
    int status;
    std::cout << "Enter name: ";
    std::cin.getline(name,Len);
    std::cout << "Enter status: ";
    std::cin >> status;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
     if (name[0] == '\0') {
        return 0;  // Return 0 if name is an empty string
    }

    *this = golf(name,status);

    return 1;
}

void golf::handicap(int hc){
    player.handicap = hc;
}

void golf::showgolf(){
    std::cout << "Name: " << player.fullname << std::endl;
    std::cout << "Status: " << player.handicap << std::endl;
}

