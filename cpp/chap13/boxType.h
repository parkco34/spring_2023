#ifndef H_boxType
#define H_boxType

#include "rectangleType.h"

class boxType : public rectangleType
{
public:
    void setDimension(double l, double w, double h);
    double getHeight() const;
    double volume() const;

    // Overloaded operators
    boxType operator+(const boxType& otherBox) const;
    boxType operator-(const boxType& otherBox) const;
    boxType operator*(const boxType& otherBox) const;
    bool operator==(const boxType& otherBox) const;
    bool operator!=(const boxType& otherBox) const;
    bool operator<=(const boxType& otherBox) const;
    bool operator<(const boxType& otherBox) const;
    bool operator>=(const boxType& otherBox) const;
    bool operator>(const boxType& otherBox) const;
    boxType operator++();    // pre-increment
    boxType operator++(int); // post-increment
    boxType operator--();    // pre-decrement
    boxType operator--(int); // post-decrement

    friend std::ostream& operator<<(std::ostream& os, const boxType& box);
    friend std::istream& operator>>(std::istream& is, boxType& box);

    // Constructors
    boxType();
    boxType(double l, double w, double h);

private:
    double height;
};

#endif


