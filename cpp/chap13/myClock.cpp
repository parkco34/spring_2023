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

    
    // Operator Overloading
    cout << myClock << endl;
    myClock++;
    if (myClock == yourClock) {
        cout << "Vera nice ... " << endl;
    }

    return 0;
}


