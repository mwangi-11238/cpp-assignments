// Week 4 Task 2: Savings Withdrawal System (while loop)
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double accountBalance, withdrawalAmount;
    cout << "Enter account balance (KES): "; cin >> accountBalance;
    cout << fixed << setprecision(2);
    cout << "\nStarting Balance: KES " << accountBalance << endl;
    while (accountBalance > 0) {
        cout << "\nEnter withdrawal amount (KES): "; cin >> withdrawalAmount;
        if (withdrawalAmount > accountBalance) {
            cout << "Insufficient funds! Remaining Balance: KES " << accountBalance << endl;
            break;
        }
        accountBalance -= withdrawalAmount;
        cout << "Withdrawal successful. Remaining Balance: KES " << accountBalance << endl;
        if (accountBalance == 0) { cout << "Balance is zero. No more withdrawals." << endl; break; }
    }
    cout << "\nFinal Balance: KES " << accountBalance << endl;
    return 0;
}
