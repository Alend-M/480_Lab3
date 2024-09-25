#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"
#include <string>

class Shape {
private:
    Point origin;
    char* shapeName;

public:
    // Constructor
    Shape(const char* name, double x, double y);

    // Destructor
    ~Shape();

    // Member functions
    const Point& getOrigin() const;
    const char* getName() const;
    void display() const;
    void move(double dx, double dy);

    // Distance functions
    double distance(Shape& other);
    static double distance(Shape& the_shape, Shape& other);
};

#endif // SHAPE_H