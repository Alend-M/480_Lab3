#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;
    double y;
    int id;
    static int nextId;
    static int count;

public:
    // Constructor
    Point(double x, double y);

    // Destructor
    ~Point();

    // Getters
    double getx() const;
    double gety() const;
    int getId() const;

    // Setters
    void setx(double x);
    void sety(double y);

    // Member functions
    void display() const;
    static int counter();

    // Distance functions
    double distance(const Point& other) const;
    static double distance(const Point& p1, const Point& p2);
};

#endif // POINT_H