#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    string holderName;
    int accountNumber;
    double balance;

    BankAccount(string name, int accNo, double bal) {
        holderName = name;
        accountNumber = accNo;
        balance = bal;
        cout << "Account successfully created" << endl;
    }

    void displayAccount() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Holder Name   : " << holderName << endl;
        cout << "Account No    : " << accountNumber << endl;
        cout << "Balance       : Ksh " << balance << endl;
    }

    ~BankAccount() {
        cout << "\nAccount closed successfully" << endl;
    }
};

int main() {
    BankAccount acc("John Kamau", 100123, 15000.00);
    acc.displayAccount();
    return 0;
}
