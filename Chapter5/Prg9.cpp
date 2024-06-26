#include <iostream>

int main() {
    std::string word;
    int wordCount = 0;

    std::cout << "Enter words (to stop, type the word done):\n";

    while (true) {
        std::cin >> word;
        
        
        if (word == "done") {
            break;
        }

        wordCount++;
    }

    std::cout << "You entered a total of " << wordCount << " word";
    if (wordCount != 1) std::cout << "s";
    std::cout << ".\n";

    return 0;
}