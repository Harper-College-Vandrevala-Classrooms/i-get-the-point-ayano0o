#include <iostream>
#include <cmath>    

using namespace std;

class Point {
private:
    double x, y;

public:
    Point(double xCord, double yCord) : x(xCord), y(yCord) {}

    double getX() const { return x; }
    double getY() const { return y; }

    double operator-(const Point& other) const {
        return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
    }

    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }

    bool operator!=(const Point& other) const {
        return !(*this == other); 
    }

    Point operator/(const Point& other) const {
        double midX = (x + other.x) / 2;
        double midY = (y + other.y) / 2;
        return Point(midX, midY); 
    }

    void print() const {
        cout << "(" << x << ", " << y << ")";
    }
};
