#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calcMaxVolume(double length, double width) {
    double a = length + width;
    double b = -4 * length * width;
    double c = length * width * length * width;
    double delta = b * b - 4 * a * c;
    double side = (sqrt(delta) - b) / (2 * a);
    double height = length - 2 * side;
    double volume = side * height * width;
    return volume;
}

int main() {
    double area;
    cout << "Enter the area of the flat cardboard: ";
    cin >> area;

    double length = sqrt(area);
    double width = area / length;
    width = area / width; // fix: calculate width correctly

    double side = calcMaxVolume(length, width);
    double height = length - 2 * side;
    double volume = side * height * width;

    cout << "Length: " << setprecision(3) << fixed << length << endl;
    cout << "Width: " << setprecision(3) << fixed << width << endl;
    cout << "Side of the square to be cut: " << setprecision(3) << fixed << side << endl;
    cout << "Maximum volume: " << setprecision(3) << fixed << volume << endl;

    return 0;
}

