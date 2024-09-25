#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"  

class Square : public Shape {
private:
    double side_a;

public:
    // Constructor
    Square(double x, double y, double side, const char* name);

    // Member functions
    double area() const;
    double perimeter() const;

    // Getters and setters
    double getSideA() const;
    void setSideA(double side);

    // Display function
    void display() const;
};

#endif // SQUARE_H