#ifndef CORNERCUT_H
#define CORNERCUT_H

#include "rectangle.h"
#include "circle.h"

class CornerCut : public Rectangle , public Circle {
public: 

    // Constructor
    CornerCut( double x, double y, double width, double height, double radius, const char* name);

    // Member functions
    double area() const override;
    double perimeter() const override;
    double distance(const Circle& other) const;

    // Getters name
    const char* getName() const;
    // display function
    void display() const;
};
#endif // CORNERCUT_H