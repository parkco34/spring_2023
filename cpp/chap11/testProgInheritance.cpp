   
#include <iostream>                                 //Line 1
#include <iomanip>                                  //Line 2
#include "rectangleType.h"                          //Line 3
#include "boxType.h"                                //Line 4
  
using namespace std;                                //Line 5

int main()                                          //Line 6
{                                                   //Line 7
    rectangleType myRectangle1;                     //Line 8
    rectangleType myRectangle2(8, 6);               //Line 9

    boxType myBox1;                                 //Line 10
    boxType myBox2(10, 7, 3);                       //Line 11
    
    cout << fixed << showpoint << setprecision(2);  //Line 12

    cout << "Line 13: myRectangle1: ";              //Line 13
    myRectangle1.print();                           //Line 14
    cout << endl;                                   //Line 15
    cout << "Line 16: Area of myRectangle1: "
         << myRectangle1.area() << endl;            //Line 16

    cout << "Line 17: myRectangle2: ";              //Line 17
    myRectangle2.print();                           //Line 18
    cout << endl;                                   //Line 19
    cout << "Line 20: Area of myRectangle2: "
         << myRectangle2.area() << endl;            //Line 20

    cout << "Line 21: myBox1: ";                    //Line 21
    myBox1.print();                                 //Line 22
    cout << endl;                                   //Line 23
    cout << "Line 24: Surface Area of myBox1: "
         << myBox1.area() << endl;                  //Line 24
    cout << "Line 25: Volume of myBox1: "
         << myBox1.volume() << endl;                //Line 25

    cout << "Line 26: myBox2: ";                    //Line 26
    myBox2.print();                                 //Line 27
    cout << endl;                                   //Line 28
    cout << "Line 29: Surface Area of myBox2: "
         << myBox2.area() << endl;                  //Line 29
    cout << "Line 30: Volume of myBox2: "
         << myBox2.volume() << endl;                //Line 30

    return 0;                                       //Line 31
}                                                   //Line 32

