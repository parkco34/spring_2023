#include <iostream>
#include "clockType.h"

using namespace std;

int main()
{
    clockType myClock;
    clockType yourClock;
    int hours, minutes, seconds;

    myClock.setTime(2, 4, 37);

    cout << "myClock: ";
    myClock.printTime();
    cout <<  endl;

    cout << "Elapsed time in seconds: " << myClock.elaspedSeconds() << endl;
    cout << "Remaining seconds: " << myClock.remainingSeconds() << endl;

    return 0;
}
