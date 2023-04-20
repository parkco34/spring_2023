// Derive the class extClockType from the class clockType by adding a member variable to store 
// the time zone called timeZone. Add the necessary member functions and constructors to make the 
// class functional. Also, write the definitions of the member functions and the constructors. 
// Finally, write a test program to test your class.
#include <iostream>
#include <string>
#include "extClockType.h"

using namespace std;

int main()
{
    extClockType thing1(3, 37, 37);
    thing1.printTime();
    return 0;
}
