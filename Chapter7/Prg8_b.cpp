#include <iostream>
#include <array>
#include <string>
#include <limits>
// constant data

const int Seasons = 4;
//const std::array<std::string, Seasons> Snames =  {"Spring", "Summer", "Fall", "Winter"};
const char *Snames[] = {"Spring", "Summer", "Fall", "Winter"};
struct expenses_s{
    double m_expenses[Seasons];
};
// function to modify array object
void fill(struct expenses_s *pa);
// function that uses array object without modifying it
void show(struct expenses_s *da);
int main()
{
    //double expenses[4];
    expenses_s *expenses = new expenses_s;
    fill(expenses);
    show(expenses);
    return 0;
}
void fill(struct expenses_s *pa)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa->m_expenses[i];
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }
}
void show(struct expenses_s *da)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da->m_expenses[i] << endl;
        total += da->m_expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}