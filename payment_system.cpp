#include <iostream>
using namespace std;

class Payment {
public:
    void processPayment(int amount) {
        cout << "\n--- Cash Payment ---" << endl;
        cout << "Amount Paid : Ksh " << amount << endl;
    }

    void processPayment(int amount, double transactionFee) {
        double total = amount + transactionFee;
        cout << "\n--- Card Payment ---" << endl;
        cout << "Amount          : Ksh " << amount << endl;
        cout << "Transaction Fee : Ksh " << transactionFee << endl;
        cout << "Total Charged   : Ksh " << total << endl;
    }

    void processPayment(int amount, double fee, double discount) {
        double total = (amount + fee) - discount;
        cout << "\n--- Mobile Payment ---" << endl;
        cout << "Amount    : Ksh " << amount << endl;
        cout << "Fee       : Ksh " << fee << endl;
        cout << "Discount  : Ksh " << discount << endl;
        cout << "Total     : Ksh " << total << endl;
    }
};

int main() {
    Payment p;
    p.processPayment(500);
    p.processPayment(1000, 25.50);
    p.processPayment(2000, 30.00, 100.00);
    return 0;
}
