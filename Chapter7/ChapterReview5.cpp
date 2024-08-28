#include <iostream>

double largest(double arr[],int size){

    double temp_largest = arr[0];
    for(int i = 1; i< size; i++){
        if(arr[i] > temp_largest){
            temp_largest = arr[i];
        }
    }
    return temp_largest;
}

int main(){

    double testArray[] = {3.14, 2.718, -1.618, 0.0, 1e6, 42.0, -999.99, 1.414};

    double large_val = largest(testArray,sizeof(testArray)/sizeof(testArray[0]));

    std::cout << large_val << std::endl;

    return 0;
}