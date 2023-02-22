#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c; // Coefficients
    double root1, root2;

    cout << "++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "Quadratic Equation Solver" << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++" << endl;

    cout << "Please enter values for the coefiicients: a, b, c " << endl;
    cin >> a >> b >> c;

    // Discriminant of ax^2 + bx + c
    double discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + pow(discriminant, 0.5)) / (2 * a);
        root2 = (-b - pow(discriminant, 0.5)) / (2 * a);
        cout << "Real and DISTINCT roots:\nroot1 = " << fixed << setprecision(2) << root1 << "\nroot2 = " << setprecision(2) << root2 << endl;
    }

    else if (discriminant == 0)
    {
        root1 = -b / (2.0 * a);
        cout << "Repeated Root is: " << fixed << setprecision(3) << root1 << endl;
    }

    else {
        cout << "Complex " << endl;
    }

    return 0;
}
