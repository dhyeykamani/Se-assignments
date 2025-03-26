#include <iostream>

using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {
        balance = (initialBalance >= 0) ? initialBalance : 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient funds or invalid amount!\n";
        }
    }

    void displayBalance() {
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount(1000.0);

    myAccount.displayBalance();
    myAccount.deposit(500);
    myAccount.withdraw(200);
    myAccount.displayBalance();

    return 0;
}

