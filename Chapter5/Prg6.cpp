#include<iostream>
#include <numeric>
#include<iomanip>

int main(){

    std::string Year[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    int book_sales[3][12];
    int sum = 0;

    for(int i = 0; i<3; i++){
        std::cout << "Enter year" << i+1 << " book sales" << "\n";
        for (int month = 0; month < 12; ++month) {
            std::cout << Year[month] << ": ";
            std::cin >> book_sales[i][month];
        }
    }

    int totalSales = 0;
    for (int year = 0; year < 3; ++year) {
        int yearlyTotal = std::accumulate(book_sales[year], book_sales[year] + 12, 0);
        totalSales += yearlyTotal;

        std::cout << "\nYear " << year + 1 << ":\n";
        for (int month = 0; month < 12; ++month) {
            std::cout << std::setw(10) << std::left << Year[month] 
                      << ": " << book_sales[year][month] << " books\n";
        }
        std::cout << "Total for Year " << year + 1 << ": " << yearlyTotal << " books\n";
    }

    std::cout << "\nTotal sales over " << 3 << " years: " << totalSales << " books\n";
    std::cout << "Average annual sales: " << static_cast<double>(totalSales) / 3 << " books\n";



    return 0;
}