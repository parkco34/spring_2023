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
        // Post-fix
        // Operator must create a copy of the object before it's incremented, increment the original object, and then return the copy.
        rectangleType& operator++();
        rectangleType& operator--();
        // Prefix
        // modifies the current object and then returns a reference to the modified object. This is useful because it allows you to do things like chaining the operation (+++x or ----x), and it avoids unnecessary copying of objects
        rectangleType operator++(int);
        rectangleType operator--(int);
        // Overloading array index operator
        rectangleType operator[](int index);
        

};

#endif
