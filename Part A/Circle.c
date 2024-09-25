#include <string>
#include "Circle.h"

Circle::Circle(const char* name, double x, double y, double radius): Shape(name, x, y) {
    this->radius = radius;
}