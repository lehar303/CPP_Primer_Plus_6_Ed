#include <iostream>
#include <cctype>

int main()
{
    int no_of_consonents = 0, no_of_vowels = 0, others = 0;
    std::string word;

    std::cout << "Enter words (q to quit):" << std::endl;

    while (std::cin >> word && word != "q")
    {
        if(isalpha(word[0])){
            char firstletter = tolower(word[0]);
            if(firstletter == 'a' || firstletter == 'e' || firstletter == 'i' || firstletter == 'o' || firstletter == 'u'){
                no_of_vowels++;
            }
            else
                no_of_consonents++;
        }
        else
            others++;
    }

    std::cout << no_of_vowels << " words beginning with vowels\n" <<
                 no_of_consonents << " words beginning with consonents\n" <<
                 others << " others" << std::endl;
    

    return 0;
}