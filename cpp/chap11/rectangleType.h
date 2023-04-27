#include <string>
using namespace std;

class rectangleType
{
    double length, width;

    public:
        void setDimension(double l, double w);
        // Sets length and width of of rectangle
        // Post condition: length = l, width = w
        // Read-only member functions:
        double getLength() const;
        double getWidth() const;
        double getArea() const;
        double perimeter() const;
        void print() const;
        rectangleType(); // Default constructor
        rectangleType(double l, double w);
};
