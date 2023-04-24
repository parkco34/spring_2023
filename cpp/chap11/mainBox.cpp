#include <iostream>
#include <string>
#include "boxType.h"

using namespace std;

int main()
{
    boxType box1;
    cout << "Without setting the dimensions: " << endl;
    box1.print();
    cout << endl;

    // Set dimensions
    cout << "After setting the dimensions to King Tut's sarchophagus: " << endl;
    box1.setDimension(2.13, 1.07, 0.61);
    box1.print();
    cout << endl;

    return 0;
}
