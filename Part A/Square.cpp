#include "square.h"
#include "Shape.h"
#include <iostream>
#include <iomanip>

// Constructor
Square::Square( double x, double y, double side, const char* name): Shape(name, x, y) {
    side_a = side; 
}

// Area calculation
double Square::area() const {
    return (side_a * side_a);
}

// Perimeter calculation
double Square::perimeter() const {
    return (4 * side_a);
}

// Getter for side_a
double Square::getSideA() const {
    return side_a;
}

// Setter for side_a
void Square::setSideA(double side) {
    side_a = side;
}

// Display function
void Square::display() const {
    std::cout << "Square Name: " << getName() << "\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "X-coordinate: " << getOrigin().getx() << "\n";
    std::cout << "Y-coordinate: " << getOrigin().gety() << "\n";
    std::cout << "Side a: " << side_a << "\n";
    std::cout << "Area: " << area() << "\n";
    std::cout << "Perimeter: " << perimeter() << "\n";
}