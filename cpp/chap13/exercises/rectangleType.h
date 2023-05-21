#ifndef RECTANGLETYPE_H
#define RECTANGLETYPE_H
#include <iostream>
#include <fstream>
using namespace std;

class rectangleType
{
    // friend functions
    friend ostream& operator<<(ostream& out, const rectangleType& rectangle);
    friend istream& operator>>(istream& in, rectangleType& rectangle);

    protected:
        double length, width;

    public:
        // Accessor methods
        double getWidth() const;
        double getLength() const;
        double getArea() const;
        double getPerimeter() const;
        void print() const;
        // Mutator methods
        void setDimension(double len, double wid);
        // Constructor
        rectangleType(double len=0, double wid=0);
        // Overloaded operators
        // Where we these operators to be immutable, obviously
        bool operator==(const rectangleType& rectangle) const;
        bool operator!=(const rectangleType& rectangle) const;
        rectangleType operator+(const rectangleType& rectangle) const;
        rectangleType operator*(const rectangleType& rectangle) const;
        // Increment/decrement operator
        rectangleType& operator++();
        rectangleType& operator--();
        rectangleType operator++(int);
        rectangleType operator--(int);

};

#endif
