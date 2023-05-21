//This chapter uses the class rectangleType to illustrate how to overload the operators +, *, ==, !=, >>, and <<. 
// In this exercise, first redefine the class rectangleType by declaring the instance variables as protected and then overload additional operators as defined in parts a to c.
//
//    Overload the pre- and post-increment and decrement operators to increment and decrement, respectively, the length and width of a rectangle by one unit. (Note that after decrementing the length and width, they must be positive.)
//
//    Overload the binary operator - to subtract the dimensions of one rectangle from the corresponding dimensions of another rectangle. If the resulting dimensions are not positive, output an appropriate message and do not perform the operation.
//
//    The operators == and != are overloaded by considering the lengths and widths of rectangles. Redefine the functions to overload the relational operator by considering the areas of rectangles as follows: Two rectangles are the same, if they have the same area; otherwise, the rectangles are not the same. Similarly, rectangle yard1 is greater than rectangle yard2 if the area of yard1 is greater than the area of yard2. Overload the remaining relational operators using similar definitions.
//
//    Write the definitions of the functions to overload the operators defined in parts a to c.
//
//    Write a test program that tests various operations on the class rectangleType.
#include <iostream>
#include "rectangleType.h"

using namespace std;

int main()
{
    double length, width;
    cout << "Enter length and width of box: " << endl;
    cin >> length >> width;

    rectangleType box(length, width);
    rectangleType box2(length + 37, width * 23);

    box.print();
    box2.print();
    
    cout << "Box area: " << box.getArea() << endl;
    cout << "Box parimeter: " << box.getPerimeter() << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "overloaded +: " << endl;
    cout << "========================================== " << endl;
    cout << "Area + Perimeter: ";
    cout << box.getArea() + box.getPerimeter() << endl;
    cout << "Overloaded *" << endl;
    cout << "========================================== " << endl;
    cout << "Box Area: ";
    cout << box.getArea() * box.getPerimeter() << endl;
    cout << "Overloaded ==" << endl;
    cout << "========================================== " << endl;

    if (box == box2)
        cout << "Yupz" << endl;
    else if (box != box2)
        cout << "Nope .. " << endl;
    else
        cout << "What the fuck am I even doing here? " << endl;

    cout << "Overloaded INSERTION/EXTRACTION operators: " << endl;
    rectangleType box3;
    cin >> box3;
    cout << "Box1: \n" << box << endl;
    cout << "Box2: \n" << box2 << endl;
    cout << "Box3: \n" << box3 << endl;
    cout << "Pre-Incremenet/Decrement operator overloads" << endl;
    ++box;
    cout << "Box after increment: \n" << box << endl;
    --box2;
    cout << "Box2 after decrement: \n" << box2 << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

    return 0;
}
