#ifndef AREA_H
#define AREA_H

#include "Math.h"

class Area
{
    private:
        double length, width, radius, base, height;

    public:
        // Accessor methods
        double rectangle(double length, double width) const;
        double circle(double radius) const;
        double triangle(double base, double height) const;

        // Constructors
        Area();
};

#endif
