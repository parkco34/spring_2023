#include <iostream>
#include "Clock.h"

using namespace std;

int main()
{
    Clock myClock(8, 23, 34);
    Clock yourClock(4, 5, 30);
    myClock.printTime();
    myClock.incrementSeconds();

    if (myClock.equalTime(yourClock)) {
        cout << "Hi there little fella" << endl;
    }

    return 0;
}


