// Week 3 Task 2: Water Billing System Using Functions
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
string customerName;
double unitsConsumed, waterBill, discountAmount, finalAmount;
const double RATE_PER_UNIT = 50.0;
void getCustomerDetails() {
    cout << "Enter customer name: "; getline(cin, customerName);
    cout << "Enter units consumed: "; cin >> unitsConsumed;
}
void calculateBill() { waterBill = unitsConsumed * RATE_PER_UNIT; }
void applyDiscount() {
    if (unitsConsumed > 100) { discountAmount = waterBill * 0.10; finalAmount = waterBill - discountAmount; }
    else { discountAmount = 0; finalAmount = waterBill; }
}
void displayBill() {
    cout << "\n========================================" << endl;
    cout << "           WATER SUPPLY BILL            " << endl;
    cout << "========================================" << endl;
    cout << fixed << setprecision(2);
    cout << "Customer Name    : " << customerName << endl;
    cout << "Units Consumed   : " << unitsConsumed << " units" << endl;
    cout << "Bill Before Disc : KES " << waterBill << endl;
    if (discountAmount > 0) cout << "Discount (10%)   : KES " << discountAmount << endl;
    else cout << "Discount         : None" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Amount Payable   : KES " << finalAmount << endl;
    cout << "========================================" << endl;
}
int main() {
    getCustomerDetails(); calculateBill(); applyDiscount(); displayBill();
    return 0;
}
