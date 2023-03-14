// USING CONST DOUBLE PI = 3.14159;, OUTPUT THE SQUARE ROOT OF PI
// - PROMPT USER TO INPUT VALUE OF A DOUBLE VARIABLE 'R', WHICH STORES
//  THE RADIUS OF A SPHERE...
//  OUTPUT:
//      SURFACE AREA: VALUE OF 4*PI*R^2
//      VOLUME; VALUE OF (4/3)*PI*R^3
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double r;
    const double PI = 3.14159;    // Radius
    cout << "sqrt(PI) = " << fixed << setprecision(2) << sqrt(PI) << endl;
    cout << "Enter a Radius: " << endl;
    cin >> r;

    cout << "The Surface area of the sphere: 4 * PI * " << fixed << setprecision(2) << r << " ^ 2 = " << (4 * PI * pow(r, 2)) << endl;
    cout << "The Volume of the sphere: 4 / 3 * PI * " << fixed << setprecision(2) << r << " ^ 3 = " << ((4.0/3.0) * PI * pow(r, 3)) << endl;
}


