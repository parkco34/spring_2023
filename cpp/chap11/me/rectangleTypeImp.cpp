#include "rectangleType.h"

rectangleType::rectangleType(double l, double w)
{
    setDimension(l, w);
}

rectangleType::rectangleType()
{
    length = 0;
    width = 0;
}

void rectangleType::setDimension(double l, double w)
{
    if (l >= 0)
        length = l;
    else
        length = 0;

    if (w >= 0)
        width = w;
    else
        width = 0;
}

double getLength() const
{
    return length;
}

double getWidth() const
{
    return width;
}

double area() const
{
    return length * width;
}

double perimeter() const
{
    return 2 * (length + width);
}

void print() const
{
    cout << "Length: " << length << endl;
    cout << "Width: " <<  width << endl;
    cout << "Area: " << this->area() << endl;
    cout << "Perimeter: " << this->perimeter() << endl;
}
