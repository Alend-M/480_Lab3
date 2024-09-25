#include <string>
#include "circle.h"
#include <iostream>
#include <iomanip>
using namespace std;

Circle::Circle( double x, double y, double radius,const char* name): Shape(name, x, y) {
    this->radius = radius;
}

double Circle::area() const {
    return (3.14159 * radius * radius);
}

double Circle::perimeter() const {
    return (2 * 3.14159 * radius);
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double radius) {
    this->radius = radius;
}

void Circle::display() const {
    cout << "\n" << "Circle Name: " << Shape::getName() << "\n";
    cout << "X-coordinate: " << Shape::getOrigin().getx() << "\n";
    cout << "Y-coordinate: " << Shape::getOrigin().gety() << "\n";
    cout << "Radius: " << radius << "\n";
    cout << "Area: " << area() << "\n";
    cout << "Perimeter: " << perimeter() << "\n";
}
