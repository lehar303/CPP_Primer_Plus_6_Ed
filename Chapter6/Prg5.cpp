#include <iostream>

int main()
{

    double income = 0;
    double tax = 0;

    do
    {
        std::cout << "Enter you income in twerps: ";
        std::cin >> income;

        if (income <= 5000)
        {
            tax = 0;
        }
        else if (income > 5000 && income <= 15000)
        {
            tax = (income - 5000) * 0.1;
        }
        else if (income > 15000 && income <= 35000)
        {
            tax = 1000 + ((income - 15000) * 0.15);
        }
        else
        {
            tax = 4000 + ((income - 35000) * 0.2);
        }
        
        std::cout << "Tax: " << tax << "\n";
    } while (income >= 0 && (std::cin >> income)) ;

    return 0;
}