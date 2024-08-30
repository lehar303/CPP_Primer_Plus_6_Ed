#include <iostream>

template<typename T>
T max5(T ar[]){
    T largest = ar[0];
    T sec_lar = ar[1];
    for(int i = 1; i < 5;i++){
        if(largest < ar[i])
            largest = ar[i];
    }
    return largest;
}

int main(){

    int a[5] = {1,3,7,6,7};
    double b[5] = {1.1,3.7,4.5,1.3,5.6};

    std::cout << "Largest Int: " << max5(a) << std::endl;
    std::cout << "Largest Double: " << max5(b) << std::endl;

    return 0;
}