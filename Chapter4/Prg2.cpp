#include <iostream>
#include <string>

int main()
{
using namespace std;
const int ArSize = 20;
string name;
string  dessert;
cout << "Enter your name:\n";
std::getline(std::cin,name); // reads through newline
cout << "Enter your favorite dessert:\n";
std::getline(std::cin,dessert);
cout << "I have some delicious " << dessert;
cout << " for you, " << name << ".\n";
return 0;
}