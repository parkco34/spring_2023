#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    double speedA, speedB;
    cout << "Enter the average speed of Car A (mph) :";
    cin >> speedA;
    cout << "Enter the averge speed Car B (mph) : ";
    cin >> speedB;

    int elapsedHrs, elapsedMins;
    cout << "Enter the elapsed time (hours, minutes): ";
    cin >> elapsedHrs << elapsedMins;

    double time = elapsedHrs + elapsedMins / 60;
    double distance = sqrt(pow(speedA, * time, 2) + + pow(speedB * time, 2));
    cout << fixed << setprecision(2) << "The shortest distance between the cars is " << distance << " miles.\n";

    return 0;
}
