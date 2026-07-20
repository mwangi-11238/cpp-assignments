#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string brand;
    int yearOfManufacture;

    void displayVehicle() {
        cout << "Brand               : " << brand << endl;
        cout << "Year of Manufacture : " << yearOfManufacture << endl;
    }
};

class Car : public Vehicle {
public:
    int numberOfDoors;
    double engineCapacity;

    void displayCar() {
        displayVehicle();
        cout << "Number of Doors : " << numberOfDoors << endl;
        cout << "Engine Capacity : " << engineCapacity << "L" << endl;
    }
};

int main() {
    Car car;
    cout << "Enter brand: ";
    getline(cin, car.brand);
    cout << "Enter year of manufacture: ";
    cin >> car.yearOfManufacture;
    cout << "Enter number of doors: ";
    cin >> car.numberOfDoors;
    cout << "Enter engine capacity (L): ";
    cin >> car.engineCapacity;

    cout << "\n--- Car Details ---" << endl;
    car.displayCar();
    return 0;
}
