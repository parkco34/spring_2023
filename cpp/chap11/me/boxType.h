#ifndef BOXTYPE_H
#define BOXTYPE_H
#include "rectangleType.h"

class boxType: public rectangleType
{
    public:
        // Function set length, width and height
        void setDimension(double l, double w, double h);
        double getHeight() const;
        // Ger surface area of box
        double area() const;
        double volume() const;
        void print() const;
        boxType();
        boxType(double l, double w, double h);

    private:
        double height;
};

#endif
