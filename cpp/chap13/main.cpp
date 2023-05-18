#include <iostream>
#include <iomanip>
#include "rectangleType.h"

using namespace std;

int main()
{
    rectangleType myRectangle(10, 20);
    rectangleType yourRectangle;

    cout << fixed << showpoint << setprecision(2);
    cout << endl;
    myRectangle.setLength(15.25).setWidth(12.00);

    cout << "Line 8: myRectangle: " << myRectangle;
    cout << "Line 9: Enter the length and width "
        << "of a rectangle: ";
    cin >> yourRectangle;

    cout << "Line 11 -- myRectangle: ";
    myRectangle.print();
    cout << endl;

    cout << "Line 12: -- yourRectangle: " << yourRectangle;

    cout << "Line 13: -- myRectangle + yourRectangle: "
        << myRectangle + yourRectangle;
    
    cout << "Line 14: -- myRectangle * yourRectangle: "
        << myRectangle * yourRectangle;

    yourRectangle.setLength(18.50);

    cout << "Line 15 -- yourRectangle: ";
    yourRectangle.print();
    cout << endl;

    yourRectangle.setWidth(7.50);

    cout << "Line 19 -- yourRectangle: ";
    yourRectangle.print();
    cout << endl;

    cout << "Line 22 -- myRectangle: ";
    cout << myRectangle;
    cout << endl;

    // Overloading assignment operator
    myRectangle = myRectangle;
    

    return 0;
}