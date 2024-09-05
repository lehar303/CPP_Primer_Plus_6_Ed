#include "golf.h"
#include <cstring>
#include <iostream>
#include <limits>

void setgolf(golf &g, const char *name, int hc){
    strncpy(g.fullname,name,40);
    g.handicap = hc;
}

int setgolf(golf &g){
    std::cout << "Enter name: ";
    std::cin.getline(g.fullname,Len);
    std::cout << "Enter status: ";
    std::cin >> g.handicap;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
     if (g.fullname[0] == '\0') {
        return 0;  // Return 0 if name is an empty string
    }
    return 1;
}

void handicap(golf &g, int hc){
    g.handicap = hc;
}

void showgolf(const golf &g){
    std::cout << "Name: " << g.fullname << std::endl;
    std::cout << "Status: " << g.handicap << std::endl;
}

