#include <iostream>
#include <limits>

int main(){

    double donations[10];
    double sum = 0;
    double avg;
    int count = 0;

    for(int i = 0; i< 10; i++){
        std::cout << "Enter donation amount: " << "[" << i << "] ";
        std::cin >> donations[i];
        //std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n') >> donations[i];
        std::cout << isdigit(donations[i]) << std::endl;
        if(isdigit(donations[i])){
            break;
        }
        sum = sum + donations[i];        
    }
    for(int x : donations){
        std::cout << x << " ";
    }

    avg = sum/(sizeof(donations)/sizeof(donations[0]));

    for(int i = 0; i<sizeof(donations)/sizeof(donations[0]);i++){
        if(donations[i] > avg){
            ++count;
        }
    }

    std::cout << "\nAverage: " << avg << " Count greater than avg: " << count << std::endl;

    return 0;
}