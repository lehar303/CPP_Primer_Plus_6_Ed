#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

#include <string>

class BankAccount{

    public:
    BankAccount(std::string name, std::string acc_number, double balance);
    //void display(const BankAccount &depositer);
    void display1() const;
    void deposit(double amount);
    void withdraw(double amount);

    private:

    std::string name_;
    std::string acc_number_;
    double balance_;
};

#endif