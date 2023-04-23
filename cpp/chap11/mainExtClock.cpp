#include <iostream>
#include <string>
#include "extClockType.h"

using namespace std;

int main()
{
    extClockType myClock(10, 30, 0, "PST");
    myClock.printTime();
    cout << endl;

    myClock.printTimeZone();
    return 0;
}
