#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"  

class Square : public virtual Shape {
private:
    double side_a;

public:
    // Constructor
    Square(double x, double y, double side, const char* name);

    // Member functions
    double area() const override;
    double perimeter() const override;

    // Getters and setters
    double getSideA() const;
    void setSideA(double side);

    // Display function
    void display() const;
};

#endif // SQUARE_H