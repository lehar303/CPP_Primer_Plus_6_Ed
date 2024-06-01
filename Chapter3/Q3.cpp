#include<iostream>

int main(){

    const int ARCS_IN_MIN = 60;
    const int MINS_IN_DEG = 60;
    int degree,minutes,seconds;
    double lat;

    std::cout << "Enter a latitude in degrees, minutes, and seconds:" << "\n";
    std::cout << "\nFirst, enter the degrees: " ;
    std::cin >> degree;
    std::cout << "Next, enter the minutes of arc: ";
    std::cin >> minutes;
    std::cout << "\nFinally, enter the seconds of arc: ";
    std::cin >> seconds;

    lat = degree + (minutes + (double)seconds/ARCS_IN_MIN)/MINS_IN_DEG;
    
    std::cout << "\n" << degree << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << lat << "\n";
    

    return 0;
}