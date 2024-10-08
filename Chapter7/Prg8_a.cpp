#include <iostream>
#include <array>
#include <string>
// constant data

const int Seasons = 4;
//const std::array<std::string, Seasons> Snames =  {"Spring", "Summer", "Fall", "Winter"};
const char *Snames[] = {"Spring", "Summer", "Fall", "Winter"};
// function to modify array object
void fill(double *pa);
// function that uses array object without modifying it
void show(double *da);
int main()
{
    double expenses[4];
    fill(expenses);
    show(expenses);
    return 0;
}
void fill(double *pa)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (pa)[i];
    }
}
void show(double *da)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}