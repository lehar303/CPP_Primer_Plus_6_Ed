#include<iostream>
#include <array>
#include<limits>
#include<string>

void Fill_array(double array[], int size){
    
    for(int i = 0; i<size; i++){
        std::cout << "Enter [" << i << "] double values: ";
        std::cin >> array[i];
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

        if(!isdigit(array[i])){
            break;
        }
    }
}

void Show_array(double array[], int size){
    for(int i = 0; i< size; i++){
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void Reverse_array(double array[],int size){
    int start = 0;
    int end = size - 1;
    double temp;

    while(start < end){
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}

int main(){

    double example[10];

    Fill_array(example,10);
    Show_array(example,10);
    Reverse_array(example,10);
    Show_array(example,10);

    Fill_array(example,10);
    Show_array(example,10);
    Reverse_array(example + 1, 8);
    Show_array(example + 1, 8);
    
    return 0;
}