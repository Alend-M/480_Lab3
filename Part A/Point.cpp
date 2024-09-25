#include "point.h"
#include <iostream>
#include <iomanip>
#include <cmath>

// Initialize static members
int Point::nextId = 1001;
int Point::count = 0;

// Constructor
Point::Point(double x, double y){
    this->x = x;
    this->y = y;
    id = nextId++;
    count++;
}

// Destructor
Point::~Point() {
    count--;
}

// Getters
double Point::getx() const { return x;}
double Point::gety() const { return y; }
int Point::getId() const { return id; }

// Setters
void Point::setx(double x) { this->x = x; }
void Point::sety(double y) { this->y = y; }

// Display function
void Point::display() const {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "X-coordinate: " << std::setw(8) << x << std::endl;
    std::cout << "Y-coordinate: " << std::setw(8) << y << std::endl;
}

// counter function
int Point::counter() { return count; }

// Member function to calculate distance
double Point::distance(const Point& other) const {
    double dx = x - other.x; // Calculates the delta of x 
    double dy = y - other.y; // Calculates the delta of y
    return std::sqrt(dx*dx + dy*dy);
}

// Static function to calculate distance
double Point::distance(const Point& p1, const Point& p2) {
    double dx = p1.x - p2.x; 
    double dy = p1.y - p2.y;
    return std::sqrt(dx*dx + dy*dy);
}