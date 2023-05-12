#ifndef H_boxType
#define H_boxType

#include "rectangleType.h"

class boxType : public rectangleType
{
public:
    void setDimension(double l, double w);
    double getHeight() const;
    double getLength() const;
    double area() const;
    double perimeter() const;
    double volume() const;
    void print() const;

    // Overloaded arithmetic operators
    rectangleType operator+(const rectangleType&) const;
    rectangleType operator*(const rectangleType&) const;

    // Overloaded relational operators
    bool operator==(const rectangleType&) const;
    bool operator!=(const rectangleType&) const;
    
    friend std::ostream& operator<<(std::ostream& os, const boxType& box);
    friend std::istream& operator>>(std::istream& is, boxType& box);

    // Constructors
    boxType();
    boxType(double l, double w);

private:
    double height;
};

#endif


