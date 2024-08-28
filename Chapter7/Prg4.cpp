#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main()
{
    using namespace std;
    double total, choices, mega_number;
    cout << "Enter the total number of choices on the game card and\n"
            "the number of picks allowed and the mega number:\n";
    while ((cin >> total >> choices >> mega_number) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices) * probability(27,1);
        // compute the odds
        cout << " of winning.\n";
        cout << "Next  numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}
// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0; // here come some local variables
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}