#include <iostream>
#include "Clock.h"

using namespace std;

void Clock::setTime(int hours, int minutes, int seconds)
{
    if (0 <= hours && hours < 24)
        hr = hours;
    else
        hr = 0;

    if (0 <= minutes && minutes < 60)
        min = minutes;
    else
        min = 0;

    if (0 <= seconds && seconds < 60)
        sec = seconds;
    else
        sec = 0;
}

void Clock::getTime(int& hours, int& minutes, int& seconds) const
{
    hours = hr;
    minutes = min;
    seconds = sec;
}

void Clock::printTime() const
{
    if (hr < 10)
        cout << "0";
    cout << hr << ";";

    if (min < 10)
        cout << "0";
    cout << min << ":";

    if(sec < 10)
        cout << "0";
    cout << sec << ":";
}

void Clock::incrementHours()
{
    // Increment hours, but if over 23 hours, set back to zero!
    hr++;
    if (hr > 23)
        hr = 0;
}

// Increment minutes and if the minute is over 59, set to zero and increment the HOUR
void Clock::incrementMinutes()
{
    min++;
    if (min > 59) {
        min = 0;
        incrementHours();
    }
}

// Increment sceonds, and if the seconds is more than 59, set to zeor and increment minute
void Clock::incrementSeconds()
{
    sec++;

    if (sec > 59) {
        sec = 0;
        incrementMinutes();
    }
}

bool Clock::equalTime(const Clock& otherClock) const
{
    // hr, min, and sec are PRIVATE
    return (hr == otherClock.hr
            && min == otherClock.min
            && sec == otherClock.sec);
}

