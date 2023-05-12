#include "Area.h"
#include <cmath>
using namespace std;

Area::Area(double length, double width, double radius, double base)
    :length(length), width(width), radius(radius), base(base) {
        length = 0;
        width = 0;
        radius = 0;
        base = 0;
        height = 0;
    }

// Accessor methods
double rectangle(double length, double width) const
{
    return length * width;
}

double circle(double radius) const
{
    return PI * pow(radius, 2);
}

double triangle(double base, double height) const
{
    return 0.5 * base * height;
}
