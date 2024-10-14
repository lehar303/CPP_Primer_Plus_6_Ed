#include "BankAccount.hpp"

int main(){

    BankAccount b1_obj("XYZ","ABC123",56.23);
    BankAccount b2_obj("ABC","XYZ789",12.23);

    b1_obj.display1();
    b1_obj.deposit(1);
    b1_obj.display1();
    b1_obj.withdraw(2);
    b1_obj.display1();

    //b1_obj.display(b2_obj);

    return 0;
}