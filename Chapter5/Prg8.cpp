#include <iostream>
#include <cstring>

const int MAX_WORD_LENGTH = 50;

int main() {
    char word[MAX_WORD_LENGTH];
    int wordCount = 0;

    std::cout << "Enter words (to stop, type the word done):\n";

    while (true) {
        std::cin >> word;
        
        
        if (std::strcmp(word, "done") == 0) {
            break;
        }

        wordCount++;
    }

    std::cout << "You entered a total of " << wordCount << " word";
    if (wordCount != 1) std::cout << "s";
    std::cout << ".\n";

    return 0;
}