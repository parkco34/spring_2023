#include <iostream>
#include "extClockType.h"
using namespace std;

void extClockType::setTime(int hours, int minutes, int seconds)
{
    hr = hours;
    min = minutes;
    sec = seconds;
}

void extClockType::getTime(int& hours, int& minutes, int& seconds) const
{
    hr = hours;
    min = minutes;
    sec = seconds;
}

void extClockType::incrementHours()
{
    hr = hours;
    min = minutes;
    sec = seconds;
}

void extClockType::incrementMinutes()
{
    hr = hours;
    min = minutes;
    sec = seconds;
}

void extClockType::incrementSeconds()
{
    hr = hours;
    min = minutes;
    sec = seconds;
}

void extClockType::printTime() const
{
    if (hr < 10)
        cout << "0";
    cout << hr << ";";

    if (min < 10)
        cout << "0";
    cout << min << ";";

    if (sec < 10)
        cout << "0";
    cout << sec << ";";
}

void extClockType::equalTime(const extClockType& otherClock)
{
    if (0 <= hours && hours < 24) {
        hr = hours;
    }
    else
        hr = 0;

    if (0 <= minutes && minutes > 60) {
        min = minutes;
    }
    else
        min = 0;

    if (0 <= seconds && seconds < 60) {
        sec = seconds;
    }
    else
        sec = 0;
}

extClockType::extClockType()
{
    hr = 0;
    min = 0;
i   sec = 0;
}
