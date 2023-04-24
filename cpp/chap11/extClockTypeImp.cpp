#include <iostream>
#include <string>
#include "extClockType.h"
using namespace std;

void extClockType::setTimeZone(string zone)
{
    timeZone = zone;
}

string extClockType::getTimeZone() const
{
    return timeZone;
}

extClockType::extClockType()
{
    timeZone = "UTC";
}

extClockType::extClockType(int hours, int minutes, int seconds, string zone)
{
    setTime(hours, minutes, seconds);
    timeZone = zone;
}

bool extClockType::equalTime(const extClockType& otherClock) const
{
    if (hr == otherClock.hr 
            && min == otherClock.min
            && sec == otherClock.sec
            )
        return true;
    else
        return false;
}

void extClockType::printTimeZone() const
{
    cout << "Time zone: " << timeZone << endl;
}
