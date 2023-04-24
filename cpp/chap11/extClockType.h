#include <iostream>
#include <string>
#include "clockType.h"
using namespace std;

class extClockType: public clockType
{
    string timeZone;

    public:
        void setTimeZone(string);
        string getTimeZone() const;

        //Constructors
        extClockType();
        extClockType(int, int, int, string);
        void printTimeZone() const;
        bool equalTime(const extClockType& otherClock) const;
};


