#include <iostream>
#include <string>
#include "clockType.h"

using namespace std;

int main()
{
    clockType myClock;
    clockType yourClock;
    int hours, minutes, seconds;

    myClock.setTime(5, 4, 30);

    cout << "Line 9: myClock: ";
    myClock.printTime();
    cout << endl;

    cout << "Line 12: yourClock ";
    yourClock.printTime();
    cout << endl;

    yourClock.setTime(5, 45, 30);

    cout << "Line 16: After setting yourClock: ";
    yourClock.printTime();
    cout << endl;

    if (myClock.equalTime(yourClock)) {
        cout << "Line 20: Both times are equal." << endl;
    }
    else {
        cout << "Line 22: The two times are not equal." << endl;
    }

    cout << "Line 23: Enter hours, minutes, seconds: " << endl;
    cin >> hours >> minutes >> seconds;
    cout << endl;

    myClock.setTime(hours, minutes, seconds);

    cout << "Line 27: New myClock: ";
    myClock.printTime();
    cout << endl;

    myClock.incrementSeconds();
    
    cout << "Line 31: After incrementing by one second: ";
    myClock.printTime();
    cout << endl;

    myClock.getTime(hours, minutes, seconds);

    cout << "Line 35: Hours = " << hours
        << ", minutes = " << minutes
        << ", seconds = " << seconds << endl;

    return 0;
}
