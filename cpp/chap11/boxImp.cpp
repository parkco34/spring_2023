#include <string>
#include <iostream>
#include "boxType.h"
using namespace std;

void boxType::setDimension(double l, double w, double h)
{
//    if (length >= 0)
//        length = l;
//    else
//        length = 0;
//
//    if (width >= 0)
//        width = w;
//    else
//        width = 0;
    rectangleType::setDimension(l, w);
    if (height >= 0)
        height = h;
    else
        height = 1;
}

void boxType::print() const
{
    rectangleType::print();
    cout << "\nHeight = " << height << endl;
}
double boxType::getHeight() const
{
    return height;
}

double boxType::getArea() const
{
    return 2 * (getLength() * getWidth()
            + getLength() * height
            + getWidth() * height);
}

double boxType::getVolume() const
{
    return rectangleType::getArea() * height;
}

double boxType::getHeight() const
{
    return height;
}
