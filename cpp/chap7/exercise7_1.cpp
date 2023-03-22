#include <iostream>

using namespace std;

enum triangleType {scalene, isosceles, equilateral, noTriangle};

triangleType triangleShape(int side1, int side2, int side3)
{
    if (side1 == 0 && side2 == 0 && side3 == 0) {
        return noTriangle;
    }
    else if (side1 >= side2 + side3 || side2 >= side1 + side3 || side3 >= side1 + side2) {
        return noTriangle;
    }
    else if (side1 == side2 && side2 == side3) {
        return equilateral;
    }
    else if ( ((side1 == side2) && (side1 != side3 || side2 != side3)) || ((side1 == side3) &&
            (side1 != side2 || side3 != side2)) || (side2 == side3) && (side2 != side1 || side3 != side1) ) {
        return isosceles;
    }
    else if ( (side1 != side2) && (side2 != side3) && (side1 != side3) ) {
        return scalene;
    }
    else {
        return noTriangle;
    }
}

string output_format(int type)
{
    // Outputs the shape, based on the given sides of the potential triangle
    switch(type) {
        case equilateral:
            return "equilateral";
            break;

        case isosceles:
            return "isosceles";
            break;

        case scalene:
            return "scalene";
            break;

        case noTriangle:
            return "noTriangle";
            break;

        default:
            cout << "Something is wrong with your input!" << endl;
            return 0;
    }
}

int main()
{
    int side1, side2, side3, type;
    cout << "Enter side1 of triangle: " << endl;
    cin >> side1;
    cout << "Now enter the second side of triangle: " << endl;
    cin >> side2;
    cout << "Enter the third side of the triangle: " << endl;
    cin >> side3;

    type = triangleShape(side1, side2, side3);

    cout << output_format(type) << endl;
}
