#include <iostream>
#include "Clock.h"

using namespace std;

int main()
{
    Clock myClock(8, 23, 34);
    Clock yourClock(4, 5, 30);
    myClock.printTime();
    myClock.incrementSeconds();
    cout << endl;
    yourClock.printTime();

    
    if (myClock.equalTime(yourClock)) {
        cout << "Vera nice ... " << endl;
    }
    else
        cout << "\nNope" << endl;

    return 0;
}


