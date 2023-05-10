#include "boxType.h"
using namespace std;

void boxType::setDimension(double l, double w, double h)
{
    rectangleType::setDimension(l, w);
    if (h >= 0)
        height = h;
    else
        height = 0;
}

double boxType::getHeight() const
{
    return height;
}

double boxType::volume() const
{
    return length * width * height;
}

boxType boxType::operator+(const boxType& otherBox) const
{
    boxType tempBox;
    tempBox.length = length + otherBox.length;
    tempBox.width = width + otherBox.width;
    tempBox.height = height + otherBox.height;
    return tempBox;
}

boxType boxType::operator-(const boxType& otherBox) const
{
    boxType tempBox;
    tempBox.length = length - otherBox.length;
    tempBox.width = width - otherBox.width;
    tempBox.height = height - otherBox.height;
    return tempBox;
}

boxType::boxType()
{
    height = 0;
}

boxType::boxType(double l, double w, double h) : rectangleType(l, w)
{
    setDimension(l, w, h);
}

boxType boxType::operator++()
{
    ++length;
    ++width;
    ++height;
    return *this;
}

boxType boxType::operator++(int)
{
    boxType temp = *this;
    length++;
    width++;
    height++;
    return temp;
}

boxType boxType::operator--()
{
    if (length > 0) --length;
    if (width > 0) --width;
    if (height > 0) --height;
    return *this;
}

boxType boxType::operator--(int)
{
    boxType temp = *this;
    if (length > 0) length--;
    if (width > 0) width--;
    if (height > 0) height--;
    return temp;
}

boxType boxType::operator*(const boxType& otherBox) const
{
    boxType tempBox;
    tempBox.length = length * otherBox.length;
    tempBox.width = width * otherBox.width;
    tempBox.height = height * otherBox.height;
    return tempBox;
}

bool boxType::operator==(const boxType& otherBox) const
{
    return volume() == otherBox.volume();
}

bool boxType::operator!=(const boxType& otherBox) const
{ 
    return volume() != otherBox.volume();
}

bool boxType::operator<=(const boxType& otherBox) const
{
    return volume() <= otherBox.volume();
}

bool boxType::operator<(const boxType& otherBox) const
{
    return volume() < otherBox.volume();
}

bool boxType::operator>=(const boxType& otherBox) const
{
    return volume() >= otherBox.volume();
}

bool boxType::operator>(const boxType& otherBox) const
{
    return volume() > otherBox.volume();
}

ostream& operator<<(ostream& os, const boxType& box)
{
    os << "Length = " << box.length << "; Width = " << box.width << "; Height = " << box.height;
    return os;
}

istream& operator>>(istream& is, boxType& box)
{
    is >> box.length >> box.width >> box.height;
    return is;
}

