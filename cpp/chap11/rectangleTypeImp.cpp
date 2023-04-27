#include <string>
#include <iostream>
#include "rectangleType.h"
using namespace std;

void rectangleType::setDimension(double l, double w)
{
    // If length is nonnegative, good; otherwise set it to zero
    if (l >= 0)
        length = l;
    else
        length = 0;

    if (w >= 0)
        width = w;
    else
        width = 0;
}

double rectangleType::getLength() const
{
    return length;
}

double rectangleType::getWidth() const
{
    return width;
}

double rectangleType::getArea() const
{
    return length * width;
}

double rectangleType::perimeter() const
{
    return 2 * (width + length);
}

void rectangleType::print() const
{
    cout << "Length = " << length << "\nWidth = " 
        << width << endl;
}

rectangleType::rectangleType(double l, double w)
    :length(0), width(0)
{
    setDimension(l, w);
}
