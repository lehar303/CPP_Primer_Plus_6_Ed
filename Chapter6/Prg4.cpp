#include <iostream>
#include <cstring>
#include <iomanip>

#define STRSIZE 100

// Benevolent Order of Programmers name structure
struct bop
{
    char fullname[STRSIZE]; // real name
    char title[STRSIZE];    // job title
    char bopname[STRSIZE];  // secret BOP name
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
};

void init(struct bop emp[])
{
    const char *names[] = {"John Doe", "Jane Smith", "Mike Johnson", "Emily Brown", "David Lee"};
    const char *title[] = {"Developer", "Manager", "Designer", "Analyst", "Tester"};
    const char *bopname[] = {"Coder", "Boss", "Artist", "Data Guru", "Bug Hunter"};
    int prefer[] = {0, 1, 2, 1, 0};

    for (int i = 0; i < 5; i++)
    {
        strncpy(emp[i].fullname, names[i], STRSIZE - 1);
        emp[i].fullname[STRSIZE - 1] = '\0';
        strncpy(emp[i].title, title[i], STRSIZE - 1);
        emp[i].title[STRSIZE - 1] = '\0';
        strncpy(emp[i].bopname, bopname[i], STRSIZE - 1);
        emp[i].bopname[STRSIZE - 1] = '\0';
        emp[i].preference = prefer[i];
    }
}

int main()
{

    bop members[5];
    init(members);
    char input;

    std::cout << "a. display by name" << std::setw(25) << "b. display by title" << "\n"
              << "c. display by bop name" << std::setw(25) << "d. display by preference" << "\n"
              << "q. quit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> input;

    while (input != 'q')
    {
        switch (input)
        {
        case 'a':
            for (int i = 0; i < 5; i++)
            {
                std::cout << members[i].fullname << "\n";
            }
            std::cout << "Next choice: ";
            std::cin >> input;
            break;
        case 'b':
            for (int i = 0; i < 5; i++)
            {
                std::cout << members[i].title << "\n";
            }
            std::cout << "Next choice: ";
            std::cin >> input;
            break;
        case 'c':
            for (int i = 0; i < 5; i++)
            {
                std::cout << members[i].bopname << "\n";
            }
            std::cout << "Next choice: ";
            std::cin >> input;
            break;
        case 'd':
            for (int i = 0; i < 5; i++)
            {
                if(members[i].preference == 0)
                    std::cout << members[i].fullname << "\n";
                else if(members[i].preference == 1)
                    std::cout << members[i].title << "\n";
                else
                    std::cout << members[i].bopname << "\n";
            }
            std::cout << "Next choice: ";
            std::cin >> input;
            break;
        default: std::cout << "?????" << std::endl;
                 std::cout << "Next choice: ";
                 std::cin >> input;
        }
    }
    std::cout << "Bye!" << std::endl;
    return 0;
}