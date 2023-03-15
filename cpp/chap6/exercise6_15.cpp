#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

// Function prototypes
double user_input();
double calc_windchill(double, double);

int main()
{
    cout << "Enter the wind speed: " <<  endl;
    double windSpeed = user_input();
    cout << "Enter the temperature in Fahrenheit: " << endl;
    double temp = user_input();
    double windchillFactor = calc_windchill(temp, windSpeed);

    cout << "The current Temperature is: " << temp << endl;
    cout << "Windchill factor is: " << windchillFactor << endl;
    
    return 0;
}

// Calculates windchill factor
double calc_windchill(double temperature, double windSpeed)
{
    return 35.74 + 0.6215 * temperature - 35.75 * pow(windSpeed, 0.16) + 
        0.4275 * temperature * pow(windSpeed, 0.16);
}

// Gets user input
double user_input()
{
    string input;
    getline(cin, input);
    return stoi(input);
}
