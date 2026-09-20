#include <bits/stdc++.h>
using namespace std;

class Account {
private:
    int balance = 0;

public:
    void initialBal(int iBal) {
        if (iBal <= 0) {
            cout << "Invalid ammount" << endl;
            return;
        }
        else
            balance = iBal;
    }

public:
    void deposit(int ammount) {
        if (ammount <= 0) {
            cout << "Invalid ammount" << endl;
            return;
        }

        if (ammount > 0) {
            balance += ammount;
            cout << "Amount Deposited : $" << ammount << endl;
        }
    }

    void withdraw(int ammount) {
        if (ammount <= 0) {
            cout << "Invalid ammount" << endl;
            return;
        }
        if (ammount > balance) {
            cout << "Insufficient Balance" << endl;
            return;
        }
        if (balance - ammount < 10) {
            cout << "Mantain Minimum Balance should be $10" << endl;
            return;
        }
        if (ammount <= balance) {
            balance -= ammount;
            cout << "Amount Withdrawn : $" << ammount << endl;
        }

    }

public:
    void getBalance() {
        cout << "Current Balance : $" << balance << endl;
    }
};

int main() {
    int iBal;
    cout << "Enter initial balance : $";
    cin >> iBal;

    Account a1;
    a1.initialBal(iBal);
    a1.getBalance();

    // a1.balance=2000;

    int ammount;
    while (true) {
        cout << endl;
        cout << "1 : Current Balance" << endl;
        cout << "2 : Deposit Balance" << endl;
        cout << "3 : Withdraw Balance" << endl;
        cout << "4 : Exit" << endl;
        cout << "Enter your choice : ";
        int choice;
        cin >> choice;
        cout << endl;
        cout << endl;
        switch (choice) {
        case 1:
            a1.getBalance();
            break;
        case 2:
            cout << "Enter ammount to deposit : $";
            cin >> ammount;
            a1.deposit(ammount);
            break;
        case 3:
            cout << "Enter ammount to withdraw : $";
            cin >> ammount;
            a1.withdraw(ammount);
            break;
        case 4:
            cout << "Thank you" << endl;
            return 0;
        default:
            cout << "Invalid choice" << endl;
        }
    }
}