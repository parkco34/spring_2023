#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

double radius(double cx, double cy, double x, double y)
{
    return distance(cx, cy, x, y);
}

double circumference(double radius)
{
    return 2 * M_PI * radius;
}

double area(double radius)
{
    return M_PI * pow(radius, 2);
}

int main()
{
    double cx, cy, x, y;

    cout << "Enter the coordinates for the center of a circle (x,y): " << endl;
    cin >> cx >> cy;
    cout << "Enter coordinates of a point on the circle (x,y): " << endl;
    cin >> x >> y;

    double r = radius(cx, cy, x, y);
    double diameter = 2 * r;
    double c = circumference(r);
    double a = area(r);

    cout << fixed << setprecision(2);
    cout << "Radius: " << r << endl;
    cout << "Diameter: " << diameter << endl;
    cout << "Circumference: " << c << endl;
    cout << "Area: " << a << endl;

    return 0;
}
