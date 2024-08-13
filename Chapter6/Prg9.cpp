#include <iostream>
#include <fstream>

struct members_details
{
    std::string name;
    double amount;
};

members_details *list;

int main()
{

    std::ifstream read_file;
    std::string name;
    std::string temp;
    int amount;
    int no_of_contributions;
    char *ch;

    read_file.open("prg9_text.txt");

    if (!read_file.is_open())
    {
        std::cout << "ERROR OPENING FILE" << std::endl;
        exit(EXIT_FAILURE);
    }

    //while (read_file)
    //{
        std::getline(read_file, temp);
        no_of_contributions = std::stoi(temp);
        members_details *list = new members_details[no_of_contributions];

        for (int i = 0; i < no_of_contributions; i++)
        {
            std::getline(read_file, list[i].name);
            std::getline(read_file, temp);
            list[i].amount = std::stoi(temp);
        }
    //}

    /* while(read_file.getline(ch,50)){

        std::cout << ch << std::endl;
    } */

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

    if (!has_grand_patrons)
        std::cout << "None" << std::endl;

    bool has_patrons = false;
    std::cout << "PATRONS" << std::endl;
    for (int i = 0; i < no_of_contributions; i++)
    {

        if (list[i].amount < 10000)
        {
            std::cout << list[i].name << "\n";
            has_patrons = true;
        }
    }

    if (!has_patrons)
        std::cout << "None" << std::endl;

    return 0;
}