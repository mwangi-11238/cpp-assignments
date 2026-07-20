#include <iostream>
#define PI 3.14159
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double calculateArea() override {
        return PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double calculateArea() override {
        return length * width;
    }
};

int main() {
    Shape* ptr;

    Circle c(7.0);
    Rectangle r(5.0, 3.0);

    ptr = &c;
    cout << "Circle Area    : " << ptr->calculateArea() << endl;

    ptr = &r;
    cout << "Rectangle Area : " << ptr->calculateArea() << endl;

    return 0;
}
