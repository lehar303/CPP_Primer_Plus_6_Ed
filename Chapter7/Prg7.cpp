#include <iostream>
const int Max = 5;
// function prototypes
double* fill_array(double ar[], int limit);
void show_array(const double ar[], double* n); // don't change data
void revalue(double r, double ar[], double* n);
int main()
{
    using namespace std;
    double properties[Max];
    double *size = fill_array(properties, Max);
    show_array(properties, size);
    if (size != nullptr)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}
double* fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";

            break;
        }
        else if (temp < 0)
            break;
        //ar[i] = temp;
        *ar = i;
        ar++;
        // signal to terminate
    }
    return ar;
}
// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double ar[], double* n)
{
    using namespace std;
    //for (int i = 0; i < n; i++)
    while(ar != n)
    {
        int i = 0;
        cout << "Property #" << (i) << ": $";
        cout << ar[i] << endl;
        ar++;
        i++;
    }
}
// multiplies each element of ar[] by r
void revalue(double r, double ar[], double* n)
{
    //for (int i = 0; i < n; i++)
    while(ar != n){
        *ar *= r;
        ar++;
    }
}