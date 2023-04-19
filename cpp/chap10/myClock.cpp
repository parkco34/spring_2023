#include <iostream>
#include "Clock.h"

using namespace std;

int main()
{
    Clock myClock, otherClock;
    myClock.setTime(2, 48, 52);

    Clock yourClock;
    myClock = yourClock;
    
    if (myClock.equalTime(yourClock)) {
        cout << "Times are equal" << endl;
    }
    else {
        cout << "Times are not equal" << endl;
    }

    return 0;
}


