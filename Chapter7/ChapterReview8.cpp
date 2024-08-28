#include <iostream>

int replace(char * str, char c1, char c2);

int main(){

    char sting[50] = "tttttttaaaaatttttttttt\0";

    int no = replace(sting,'a','s');

    std::cout << no << std::endl;

    return 0;
}

int replace(char * str, char c1, char c2){
    int count = 0;

    while( *str != '\0'){
        if( *str == c1){
            *str = c2;
            count++;
        }
        str++;
    }
    return count;
}