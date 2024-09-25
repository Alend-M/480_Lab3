#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h" // Ensure that this path is correct
#include <string>

class Circle{ // "Circle" class name should match
private:
    double radius;
public:
    // Constructor
    Circle(const char* name, double x, double y, double radius);

    // Destructor
    ~Circle();

    // Member functions
    double area() const;
    double perimeter() const;

    // Getters
    double getRadius() const;

    // Setters
    void setRadius(double radius);

    // Display function
    void display() const;
};

#endif // CIRCLE_H
