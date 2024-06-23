#include<iostream>
#include<array>

int main(){

    std::array<int,3> dash_40;
    int avg,total=0;



    for(int i = 0; i< dash_40.size(); i++){
        std::cout << "Enter time: " << "\n";
        std::cin >> dash_40[i];
        total = total + dash_40[i];
    }
    avg = total/dash_40.size();

    for(int i = 0; i< dash_40.size(); i++){
        std::cout << dash_40[i] << " "; 
    }
    std::cout << "\n" << "Average: " << avg;
    
    return 0;
}