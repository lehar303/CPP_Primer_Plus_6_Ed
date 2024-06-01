#include<iostream>

int main(){

    long long seconds;

    std::cout << "Enter the number of seconds: ";
    std::cin >> seconds;
    std::cout << "\n";
    long long total_sec = seconds;

    int days = seconds/(60*60*24);
    seconds = seconds - (days * 60 * 60 * 24);

    int hours = seconds/(60 * 60);
    seconds = seconds - (hours * 60 * 60);

    int min = seconds/60;
    int new_seconds = seconds - (min * 60);


    std::cout << total_sec << " seconds = " << days << " days, " << hours << " hours, " << min << " minutes, " << new_seconds << " seconds" << "\n";

    return 0;
}