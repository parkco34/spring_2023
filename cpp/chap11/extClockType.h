#ifndef H_extClockType
#define H_extClockType

#include <iostream>
#include <string>
#include "clockType.h"
using namespace std;

class extClockType: public clockType
{
    int hr, min, sec;

    public:
        //Mutator methods
        void setTime(int, int, int);
        void setTimeZone() const;
        
        void getTime(int&, int&, int&);
        void printTime() const;
        void getTimeZone() const;
        void incrementSeconds();
        void incrementMinutes();
        void incrementHours();
        bool equalTime(const extClockType& otherClock) const;

        // Constructors
        extClockType(int hours, int mintues, int seconds);
        extClockType();
};

#endif
