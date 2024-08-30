#include <iostream>
#include <cstring>

template <typename T>
T maxn(T ar[], int size){
    T largest = ar[0];
    for(int i = 0; i< size; i++){
        if(largest < ar[i])
            largest = ar[i];
    }
    std::cout << "template" << std::endl;
    return largest;
}

template<>
char* maxn<char*>(char *arr[],int n){
    char *longest = arr[0];
    for(int i = 0; i< n; i++){

        if(std::strlen(longest) < std::strlen(arr[i])){
            longest = arr[i];
        }
    }
    std::cout << "specialization" << std::endl;
    return longest;
}

int main(){

    int a[] = {1,2,3,4,5,6};
    double b[] = {1.1,2.2,4.4,3.3};
    const char *str[] = {"asgdfh","jhfhjehfrjgjhjgjh","dhehfiehf"};

    std::cout << "Largest int: " << maxn(a,sizeof(a)/sizeof(int)) << std::endl;
    std::cout << "Largest double: " << maxn(b,sizeof(b)/sizeof(double)) << std::endl;

    //std::cout << 

    char** char_ptr_arr = const_cast<char**>(str);
    std::cout << "Largest string: " << maxn(char_ptr_arr,3);

    return 0;
}