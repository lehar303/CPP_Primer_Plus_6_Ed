#include <iostream>
#include <cstring>
#include <limits>
using namespace std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
int getinfo(student pa[], int n);
// display1() takes a student structure as an argument
// and displays its contents
void display1(student st);
// display2() takes the address of student structure as an
// argument and displays the structure’s contents
void display2(const student *ps);
// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const student pa[], int n);
int main()
{
    cout << "Enter class size : ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        cout << "Enter student " << i + 1 << " details" << endl;
        cout << "Name: ";
        cin.get(pa[i].fullname, SLEN);

        if (pa[i].fullname[0] == '\0')
        {
            cout << "Input terminated. Exiting loop." << endl;
            break; // Exit the loop if a blank line is entered
        }
        while (cin.get() != '\n')
            continue;

        cout << "Hobby: ";
        cin >> pa[i].hobby;
        cout << "OppLevel: ";
        cin >> pa[i].ooplevel;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return i;
}

void display1(student st)
{
    cout << "--------DISPLAY1------------" << endl;
    cout << st.fullname << endl;
    cout << st.hobby << endl;
    cout << st.ooplevel << endl;
}

void display2(const student *ps)
{
    cout << "--------DISPLAY2------------" << endl;
    cout << ps->fullname << endl;
    cout << ps->hobby << endl;
    cout << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    cout << "--------DISPLAY3------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << " info" << endl;
        cout << "Name: " << pa[i].fullname << endl;
        cout << "Hobby: " << pa[i].hobby << endl;
        cout << "OppLevel: " << pa[i].ooplevel << endl;
    }
}