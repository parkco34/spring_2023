#include "rectangleType.h"
#include <iostream>
#include <fstream>
using namespace std;

// Constructor
rectangleType::rectangleType(double len, double wid)
    : length(len), width(wid) {} // Initializer list
        // An initializer list is a list of member variables that you want to
        // initialize with values right when the object is created.
        //  Initializer lists are particularly important when dealing with
        //  constant member variables or references, which must be initialized when the object is created.

double rectangleType::getArea() const
{
    return length * width;
}

double rectangleType::getWidth() const
{
    return width;
}

double rectangleType::getLength() const
{
    return length;
}

double rectangleType::getPerimeter() const
{
    return 2 * (length + width);
}

void rectangleType::setDimension(double len, double wid)
{
    if (len >= 0) length = len;
    else length = 0;

    if (wid >= 0) width = wid;
    else width = 0;
}

void rectangleType::print() const
{
    cout << "Box dimensions\nLength, width =  " << getLength()
        << ", " << getWidth() << endl;
    cout << "Box area is: " << getArea() << endl;
    cout << "Box perimeter is: " << getPerimeter() << endl;
}

// Overloading operators of binary type
rectangleType rectangleType::operator+(const rectangleType& rectangle) const
{
    return rectangleType(length + rectangle.length, width + rectangle.width);
}

rectangleType rectangleType::operator*(const rectangleType& rectangle) const
{
    return rectangleType(length * rectangle.length, width * rectangle.width);
}

bool rectangleType::operator==(const rectangleType& rectangle) const
{
    return length == rectangle.length && width == rectangle.width;
}

bool rectangleType::operator!=(const rectangleType& rectangle) const
{
    return !(*this == rectangle);
}

// Overloading nonmember functions
ostream& operator<<(ostream& out, const rectangleType& rectangle)
{
    out << "Length: " << rectangle.length << "\nWidth: " << rectangle.width;
    return out;
}

istream& operator>>(istream& in, rectangleType& rectangle)
{
    cout << "Enter the length and width of the box" << endl;
    in >> rectangle.length >> rectangle.width;
    return in;
}

// Overloaded Increment/Decrement operators
// Pre-fix operator
rectangleType& rectangleType::operator++()
{
    ++length;
    ++width;
    return *this;
}

rectangleType& rectangleType::operator--()
{
    if (length > 0) --length;
    if (width > 0) --width;
    return *this;
}

// Post-fix incremnent/decrement operator
rectangleType operator++(int)
{
    /* Creates copy of current object
     However, instead of returning the incremented object, it returns the original copy (temp). This mirrors the behavior of the 
     postfix increment operator in fundamental types, where the value is 
    incremented, but the original value is returned*/
    rectangleType temp = *this;
    ++(*this);
    return temp;
}

rectangleType operator--(int)
{
    rectangleType temp = *this;
    --(*this);
    return temp;
}


