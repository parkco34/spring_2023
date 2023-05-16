#include <iostream>
#include <iomanip>
#include "rectangleType.h"

using namespace std;

int main()
{
    rectangleType myRectangle;
    rectangleType yourRectangle;

    cout << fixed << showpoint << setprecision(2);
    myRectangle.setLength(15.25).setWidth(12.00);

    cout << "Line 11 -- myRectangle: ";
    myRectangle.print();
    cout << endl;

    yourRectangle.setLength(18.50);

    cout << "Line 15 -- yourRectangle: ";
    yourRectangle.print();
    cout << endl;

    yourRectangle.setWidth(7.50);

    cout << "Line 19 -- yourRectangle: ";
    yourRectangle.print();
    cout << endl;

    cout << "Line 22 -- myRectangle: ";
    myRectangle.print();
    cout << endl;

    return 0;
}