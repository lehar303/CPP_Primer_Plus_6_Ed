#include <iostream>
// constants
//const int ArSize = 10;
// function prototype
void strcount(std::string str);
int main()
{
    using namespace std;
    //char input[ArSize];
    string input;
    char next;
    cout << "Enter a line:\n";
    std::getline(std::cin, input);
    //cin >> input;
    /* while (cin)
    {
        cin.get(next);
        while (next != '\n')
            // string didn't fit!
            cin.get(next);
        // dispose of remainder
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        cin.get(input, ArSize);
    } */
    
    while(!input.empty()){
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        std::getline(std::cin, input);
        //cin >> input;
    }
    cout << "Bye\n";
    return 0;
}
void strcount(std::string str)
{
    using namespace std;
    static int total = 0;
    int count = 0;
    // static local variable
    // automatic local variable
    cout << "\"" << str << "\" contains ";
    /* while (*str++)
        // go to end of string
        count++; */
    count = str.length();
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}