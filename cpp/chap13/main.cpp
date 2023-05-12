//This program shows how to use the class rectangleType.
#include <iostream>
//Line 1
#include "rectangleType.h"
using namespace std;
//Line 2
//Line 3
int main()
//Line 4
{
//Line 5
rectangleType rectangle1 (23, 45);
//Line 6
rectangleType rectangle2 (12, 10);
//Line 7
rectangleType rectangle3; rectangleType rectangle4;
//Line 8
//Line 9
cout<<"Line 10: rectanglel: "; rectanglel.print();
//Line 10
//Line 11
cout<<< endl;
//Line 121
cout<<"Line 13: rectangle2: ";
//Line 13
rectangle2.print();
//Line 14
cout << endl;
//Line 15
=
rectangle3 rectanglel + rectangle2;
//Line 161
cout<<"Line 17: rectangle3: ";
//Line 17
rectangle3.print();
//Line 18
cout << endl;
//Line 19
rectangle4 = rectanglel rectangle2;
*
//Line 20
cout << "Line 21: rectangle4: ";
//Line 21
rectangle4.print();
cout << endl;
if (rectanglel == rectangle2)
//Line 221
//Line 23.
//Line 24
cout<<"Line 25: rectanglel and " << "rectangle2 are equal." << endl;
//Line 25
else
//Line 26
cout<<"Line 27: rectanglel and "
<< "rectangle2 are not equal." << endl;
//Line 27
if (rectanglel != rectangle3)
//Line 28
cout<<"Line 29: rectanglel and " << "rectangle3 are not equal." << endl;
//Line 29
else
//Line 30
cout<<"Line 31: rectanglel and "
<< "rectangle3 are equal." << endl;
//Line 31
return 0;
//Line 32
//Line 33
