#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;      // Data is hidden

public:
    BankAccount() {
        balance = 1000;
    }

    void deposit(int amount) {
        balance += amount;
    }

    void withdraw(int amount) {
        if (amount <= balance)
            balance -= amount;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;

    acc.deposit(500);

    cout << acc.getBalance();
}



/* 
You have a TV with a remote.

You press:--
Power ON
Volume +
Volume -

Do you know how the TV turns on internally?
No.
You only know what to press.

This is Abstraction.

Abstraction = Hiding HOW something works.





Now think about the TV's internal parts

Inside the TV there are:

Circuit board
Wires
Chips
Memory

Can you directly change them?
No.
The TV protects them.
This is Encapsulation.
Encapsulation = Protecting data from direct access.
*/