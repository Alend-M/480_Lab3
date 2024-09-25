#include "cornercut.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

CornerCut::CornerCut( double x, double y, double width, double height, double radius,const char* name): 
    Rectangle(x, y, width, height, name), 
    Shape(name, x, y),
    Circle(x, y, radius, name)
    {
        // check if the radius is greater than half of the width or height
        if (radius > width/2 || radius > height/2){
            std::cout << "\nInvalid radius for the given width and height. Exiting program." << std::endl;
            exit(1);
        }
}

double CornerCut::area() const {
    return (Rectangle::area() - Circle::area());
}

double CornerCut::perimeter() const {
    return (Rectangle::perimeter() + Circle::perimeter());
}

double CornerCut::distance(const Circle& other) const {
    double circleX =  other.getOrigin().getx();
    double circleY =  other.getOrigin().gety();

    double cornerCutX = Rectangle::getOrigin().getx();
    double cornerCutY = Rectangle::getOrigin().gety();

    return sqrt(pow(circleX - cornerCutX, 2) + pow(circleY - cornerCutY, 2));
}

const char* CornerCut::getName() const {
    return Rectangle::getName();
}

void CornerCut::display() const {
    cout << "\n" <<"CornerCut Name: "<< getName() << "\n";
    cout << fixed << std::setprecision(2);
    cout << "X-coordinate: " << Rectangle::getOrigin().getx() << "\n";
    cout << "Y-coordinate: " << Rectangle::getOrigin().gety() << "\n";
    cout << "Width: " << getSideA() << "\n";
    cout << "Height: " << getSideB() << "\n";
    cout << "Radius: " << Circle::getRadius() << "\n";
    cout << "Area: " << area() << "\n";
    cout << "Perimeter: " << perimeter() << "\n";
}
