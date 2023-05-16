#include "rectangleType.h"
#include <iostream>
using namespace std;

void rectangleType::setDimension(double len, double wid)
{
    if (len >= 0)
        length = len;
    else
        length = 0;

    if (wid >= 0)
        width = wid;
    else
        width = 0;
}

rectangleType& rectangleType::doubleDimensions()
{
    length *= 2;
    width *= 2;
    return *this;
}


double rectangleType::getLength() const
{
    return length;
}

double rectangleType::getWidth() const
{
    return width;
}

double rectangleType::area() const
{
    return length * width;
}

double rectangleType::perimeter() const
{
    return 2 * (length + width);
}

void rectangleType::print() const
{
    cout << "Length = " << length << "; Width = " << width;
}

// Friend functions
void rectangleFriend(rectangleType recFriendObject)
{
    cout << "rectFriend area: " << recFriendObject.area() << endl;
    recFriendObject.length = recFriendObject.length + 5;
    recFriendObject.width = recFriendObject.width + 5;

    cout << "After increasing length and width by 5 units, rectFriend: ";
    cout << "each, \n   recFriendObject area: " << recFriendObject.area() << endl;
}

// Member functions that return references
rectangleType& rectangleType::setWidth(double wid)
{
    width = wid;
    return *this; // Returns a reference to the current object, using the dereference operator
}

rectangleType& rectangleType::setLength(double len)
{
    length = len;
    return *this; // Returns a reference to the current object, using the dereference operator
}

rectangleType rectangleType::operator+(const rectangleType& rectangle) const
{
    rectangleType tempRect;
    tempRect.length = length + rectangle.length;
    tempRect.width = width + rectangle.width;
    return tempRect;
}

rectangleType rectangleType::operator*(const rectangleType& rectangle) const
{
    rectangleType tempRect;
    tempRect.length = length * rectangle.length;
    tempRect.width = width * rectangle.width;
    return tempRect;
}

bool rectangleType::operator==(const rectangleType& rectangle) const
{
    return (length == rectangle.length && width == rectangle.width);
}

bool rectangleType::operator!=(const rectangleType& rectangle) const
{
    return (length != rectangle.length || width != rectangle.width);
}

bool rectangleType::operator<=(const rectangleType& rectangle) const
{
    return (length <= rectangle.length && width <= rectangle.width);
}

// constructors
rectangleType::rectangleType(double len, double wid)
{
    setDimension(len, wid);
}

// Overloaded nonmember functions
istream& operator>>(istream& isObject, rectangleType& rectangle)
{
    double len, wid;
    isObject >> len >> wid;
    rectangle.setDimension(len, wid);
    return isObject;
} // Good code

// istream& operator>>(istream& isObject, rectangleType& rectangle)
// {
//     isObject >> rectangle.length >> rectangle.width;
//     return isObject;
// } // Bad code

ostream& operator<<(ostream& osObject, const rectangleType& rectangle)
{
    osObject << "Length: " << rectangle.getLength() 
             << ", Width: " << rectangle.getWidth();
    return osObject;
}
