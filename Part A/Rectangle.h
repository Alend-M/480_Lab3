#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "square.h" 

class Rectangle : public Square {
private:
    double side_b;

public:
    // Constructor
    Rectangle(double x, double y, double side_a, double side_b, const char* name);

    // Area calculation
    double area() const;

    // Perimeter calculation
    double perimeter() const;

    // Getters
    double getSideB() const;

    // Setters
    void set_side_b(double newSideB);
    void set_side_a(double newSideA);

    // Display function
    void display() const;
};

#endif // RECTANGLE_H