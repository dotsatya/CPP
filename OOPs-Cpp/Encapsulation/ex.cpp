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
