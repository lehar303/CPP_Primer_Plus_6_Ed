#include <iostream>

#include "BankAccount.hpp"

BankAccount::BankAccount(std::string name, std::string acc_number, double balance): name_(name),
            acc_number_(acc_number), balance_(balance)
{}

/*void BankAccount::display(const BankAccount &depositor){
    std::cout << "Details: " << "\n";
    std::cout << "Name: " << depositor.name_ << "\n";
    std::cout << "Account Number: " << depositor.acc_number_ << "\n";
    std::cout << "Balance: " << depositor.balance_ << std::endl;

}*/

void BankAccount::display1() const{
    std::cout << "Details: " << "\n";
    std::cout << "Name: " << name_ << "\n";
    std::cout << "Account Number: " << acc_number_ << "\n";
    std::cout << "Balance: " << balance_ << std::endl;

}

void BankAccount::deposit(double amount){
    balance_ += amount;
}

void BankAccount::withdraw(double amount){
    balance_ -= amount;
}


