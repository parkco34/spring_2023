//adding functions to the class clockType so that a program that uses this class can perform the following operations:
//    Returns the elapsed time of the day of a clock in seconds.
//    Returns the remaining time of the day of a clock in seconds.
//    Determines and outputs how far apart in time two clocks are. Outputs the time in the form hr:min:sec.
#include <iostream>
#include "clockType.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); // Generate random seed

    clockType myClock;
    clockType yourClock;
    int hours, minutes, seconds;
    cout << "Enter integers for hour, minute and seconds for the array objects: " << endl;
    cin >> hours >> minutes >> seconds;

    myClock.setTime(hours, minutes, seconds);
    yourClock.setTime(hours + rand() % 8+1, minutes+ rand() % 8+1, seconds+ rand() % 8+1);

    // Array of class objects

    clockType times[7];
    for (int i=0; i<7; i++) {
        times[i].setTime(hours + rand() % 8+1, minutes + rand() % 8+1, seconds+ rand() % 8+1);
    }

    // Output times:
    cout << "Array of times: " << endl;
    for (int i=0; i< 7; i++) {
        times[i].printTime();
        cout << endl;
    }
    cout<< endl;

    cout << "myClock: ";
    myClock.printTime();
    cout <<  endl;

    cout << "yourClock: ";
    yourClock.printTime();
    cout << endl;

    cout << "Elapsed time in seconds: " << myClock.elaspedSeconds() << endl;
    cout << "Remaining seconds: " << myClock.remainingSeconds() << endl;
    myClock.clockDifference( yourClock);

    return 0;
}
