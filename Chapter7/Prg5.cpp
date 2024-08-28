#include <iostream>

int recursive_fact(int n){

    if(n == 0)
        return 1;
    else
        return n * recursive_fact(n - 1);
}

int main(){

    std::cout << recursive_fact(5) << std::endl;

    return 0;
}