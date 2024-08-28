#include <iostream>

void set_array(int *first_val, int *last_val, int val){
    while(first_val != last_val){
        *first_val = val;
        first_val++;
    }
}

int main(){

    int a1[10];

    set_array(a1,a1 + 10,5);

    for(int i = 0; i<10; i++){
        std::cout << i << ": " << a1[i] << std::endl;
    }


    return 0;
}