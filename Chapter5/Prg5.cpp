#include<iostream>

int main(){

    std::string Year[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int book_sales[12];
    int sum = 0;

    for(int i = 0; i<12; i++){
        std::cout << "Enter " << Year[i] << " book sales" << "\n";
        std::cin >> book_sales[i];
        sum = sum + book_sales[i];
    }

    std::cout << "Total books: " << sum << "\n";

    return 0;
}