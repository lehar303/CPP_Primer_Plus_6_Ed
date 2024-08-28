#include <iostream>

void set_array(int arr[], int size, int value){
    for(int i = 0; i<size; i++){
        arr[i] = value;
    }
}

int main(){

    int a1[10];

    set_array(a1,10,5);

    for(int i = 0; i<10; i++){
        std::cout << i << ": " << a1[i] << std::endl;
    }

    return 0;
}