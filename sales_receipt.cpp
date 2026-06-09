// Week 1 Task 1: Mobile Phone Sales Receipt System
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    string customerName, phoneModel;
    int quantityBought;
    double pricePerPhone, totalSalesAmount;
    cout << "Enter customer name: "; getline(cin, customerName);
    cout << "Enter phone model purchased: "; getline(cin, phoneModel);
    cout << "Enter quantity bought: "; cin >> quantityBought;
    cout << "Enter price per phone (KES): "; cin >> pricePerPhone;
    totalSalesAmount = quantityBought * pricePerPhone;
    cout << "\n========================================" << endl;
    cout << "         MOBILE PHONE SALES RECEIPT     " << endl;
    cout << "========================================" << endl;
    cout << fixed << setprecision(2);
    cout << "Customer Name    : " << customerName << endl;
    cout << "Phone Model      : " << phoneModel << endl;
    cout << "Quantity Bought  : " << quantityBought << endl;
    cout << "Price Per Phone  : KES " << pricePerPhone << endl;
    cout << "----------------------------------------" << endl;
    cout << "Total Sales Amt  : KES " << totalSalesAmount << endl;
    cout << "========================================" << endl;
    cout << "     Thank you for your purchase!       " << endl;
    cout << "========================================" << endl;
    return 0;
}
