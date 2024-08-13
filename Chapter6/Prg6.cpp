#include <iostream>
#include <limits>

struct members_details
{
    std::string name;
    double amount;
};

int main()
{

    int no_of_contributions;
    std::string grand_patrons[no_of_contributions];
    std::string patrons[no_of_contributions];

    std::cout << "Enter the number of contributions: ";
    std::cin >> no_of_contributions;

    members_details *list = new members_details[no_of_contributions];

    for (int i = 0; i < no_of_contributions; i++)
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Enter the name: ";
        std::getline(std::cin, list[i].name);
        std::cout << "Enter the amount: ";
        std::cin >> list[i].amount;
    }

    bool has_grand_patrons = false;
    std::cout << "GRAND PATRONS" << std::endl;
    for (int i = 0; i < no_of_contributions; i++)
    {

        if (list[i].amount >= 10000)
        {
            std::cout << list[i].name << "\n";
            has_grand_patrons = true;
        }
    }

    if(!has_grand_patrons)
        std::cout << "None" << std::endl;

    
    bool has_patrons = false;
    std::cout << "PATRONS" << std::endl;
    for (int i = 0; i < no_of_contributions; i++)
    {

        if (list[i].amount < 10000){
            std::cout << list[i].name << "\n";
            has_patrons = true;
        }
    }

    if(!has_patrons)
        std::cout << "None" << std::endl;

    return 0;
}