#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("sales.txt");
    double amount, total = 0;

    if (!file.is_open()) {
        cout << "Could not open sales.txt" << endl;
        return 1;
    }

    while (file >> amount) {
        total += amount;
    }

    file.close();
    cout << "Total Sales for the Day: Ksh " << total << endl;
    return 0;
}
