#include "clockType.h"
#include <cmath>
#include <iostream>
using namespace std;

// Constructors
clockType::clockType()
{
    hr = 0;
    min = 0;
    sec = 0;
}

clockType::clockType(int hours, int minutes, int seconds)
{
    setTime(hours, minutes, seconds);
//    if (0 <= hours && hours < 24)
//        hr = hours;
//    else
//        hr = 0;
//
//    if (0 <= minutes && minutes < 60)
//        min = minutes;
//    else
//        min = 0;
//
//    if (0 <= seconds && seconds < 60)
//        sec = seconds;
//    else
//        sec = 0;
}

void clockType::getTime(int& hours, int& minutes, int& seconds) const
{
    hours = hr;
    minutes = min;
    seconds = sec;
}

void clockType::setTime(int hours, int minutes, int seconds)
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

void clockType::printTime() const
{
    if (hr < 10)
        cout << "0";
    cout << hr << ":";

    if (min < 10)
        cout << "0";
    cout << min << ":";

    if (sec < 10)
        cout << "0";
    cout << sec;
}

void clockType::incrementHours()
{
    hr++;
    if (hr > 23)
        hr = 0;
}

void clockType::incrementMinutes()
{
    min++;
    if (min > 59) {
        min = 0;
        incrementHours();
    }
}

void clockType::incrementSeconds()
{
    sec++;
    if (sec > 59) {
        sec = 0;
        incrementMinutes();
    }
}

// Because otherClock is a reference parameter, the address of the actual parameter yourClock is passed to the formal parameter otherClock
bool clockType::equalTime(const clockType& otherClock) const
{
    return (hr == otherClock.hr
            && min == otherClock.min
            && sec == otherClock.sec);
}

void clockType::setHour(int hour)
{
    hr = hour;
}

void clockType::setMinute(int minute)
{
    min = minute;
}

void clockType::setSecond(int seconds)
{
    sec = seconds;
}

int clockType::elaspedSeconds() const
{
    return (hr * 3600 + (min * 60) + sec);
}

int clockType::remainingSeconds() const
{
    return 86400 - (this->elaspedSeconds());
}

void clockType::clockDifference(const clockType& otherClock) const
{
    int otherClockSeconds = (otherClock.hr * 3600) + (otherClock.min * 60) + otherClock.sec;
    int totalSeconds = abs(otherClockSeconds - ((hr*3600) + (min*60) + sec));
    
    int hrs = totalSeconds / 3600;
    totalSeconds %= 3600;
    int minz = totalSeconds / 60;
    totalSeconds %= 60;
    
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "The difference between first clock and the second clock is " << endl;
    cout << "Hours; " << hrs << endl;
    cout << "Minutes: " << minz << endl;
    cout << "Seconds: " << totalSeconds <<  endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
}
