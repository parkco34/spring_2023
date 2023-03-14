#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double get_mean(double x1, double x2, double x3, double x4, double x5)
{
    return (x1 + x2 + x3 + x4 + x5) / 5;
}

double standard_dev(double x1, double x2, double x3, double x4, double x5)
{
    double avg = get_mean(x1, x2, x3, x4, x5);
    return sqrt((pow((x1 - avg), 2) + pow((x2 - avg), 2) 
            + pow((x3 - avg), 2) + pow((x4 - avg), 2) + pow((x5 - avg), 2)) / 5);
}

int main()
{
    double num1, num2, num3, num4, num5;
    cout << "Enter 5 numbers: " << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    double mean = get_mean(num1, num2, num3, num4, num5);
    double standard_deviation = standard_dev(num1, num2, num3, num4, num5);

    cout << fixed << setprecision(2);
    cout << "Mean; " << mean << endl;
    cout << "Standard Deviation: " << standard_deviation << endl;

    return 0;
}
