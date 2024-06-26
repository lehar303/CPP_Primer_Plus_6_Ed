#include <iostream>

int main()
{
    double Daphne_principle = 100;
    double Dapne_roi = 0.1;
    double Cleo_principle = 100;
    double Cleo_roi = 0.05;
    double Daphne_interest = 0;
    double Cleo_interest = 0;
    double Cleo_currentBal = 0;
    double Daphne_currentBal = 0;
    int time = 0;
    Cleo_currentBal = Cleo_principle + Cleo_interest;
    Daphne_currentBal = Daphne_principle + Daphne_interest;

    do
    {
        ++time;        
        std::cout << time << "\n";
        Daphne_interest = Dapne_roi * Daphne_principle;
        Cleo_interest = Cleo_roi * Cleo_currentBal;
        Cleo_currentBal = Cleo_currentBal + Cleo_interest;
        Daphne_currentBal = Daphne_currentBal + Daphne_interest;
        std::cout << "Cleo Investment Value(loop): " << Cleo_currentBal << "\n";
        std::cout << "Daphne Investment Value(loop): " << Daphne_currentBal << "\n";

    } while (Cleo_currentBal < Daphne_currentBal);

    std::cout << "Cleo Investment Value: " << Cleo_currentBal << "\n";
    std::cout << "Daphne Investment Value: " << Daphne_currentBal << "\n";
    std::cout << "Time: " << time << "\n";

    return 0;
}