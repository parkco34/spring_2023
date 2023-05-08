#ifndef H_rectangleType
#define H_rectangleType

#include <iostream>

using namespace std;

class rectangleType {
public:
    // Member functions
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;

    rectangleType();
    rectangleType(double l, double w);

    // Overload the arithmetic operators
    rectangleType operator+(const rectangleType& rectangle) const;
    rectangleType operator-(const rectangleType& rectangle) const;
    rectangleType operator*(const rectangleType& rectangle) const;

    // Overload the increment and decrement operators
    rectangleType operator++(); // pre-increment
    rectangleType operator++(int); // post-increment
    rectangleType operator--(); // pre-decrement
    rectangleType operator--(int); // post-decrement

    // Overload the relational operators
    bool operator==(const rectangleType& rectangle) const;
    bool operator!=(const rectangleType& rectangle) const;
    bool operator<=(const rectangleType& rectangle) const;
    bool operator<(const rectangleType& rectangle) const;
    bool operator>=(const rectangleType& rectangle) const;
    bool operator>(const rectangleType& rectangle) const;

    // Overload the stream insertion and extraction operators
    friend ostream& operator<<(ostream&, const rectangleType&);
    friend istream& operator>>(istream&, rectangleType&);

protected:
    double length;
    double width;
};

#endif

