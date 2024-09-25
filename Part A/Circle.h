#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public virtual Shape{ // "Circle" class name should match
private:
    double radius;
public:
    // Constructor
    Circle( double x, double y, double radius,const char* name);

    // Member functions
    double area() const override;
    double perimeter() const override;

    // Getters
    double getRadius() const;

    // Setters
    void setRadius(double radius);

    // Display function
    void display() const;
};

#endif // CIRCLE_H
