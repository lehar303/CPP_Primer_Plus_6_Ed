#include <iostream>

int main(){

    int start,end,sum = 0;
    std::cout << "Enter two numbers: " ;
    std::cin >> start >> end;

    for(int i = start; i<= end; i++){
        sum = sum + i;
    }

    std::cout << sum << "\n";

    return 0;
}