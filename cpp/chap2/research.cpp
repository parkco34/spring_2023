//Write a program that inputs current (measured
//in Amps) and resistance (measured in Ohms) within a given circuit. Calculate the voltage (measured in
//Volts) needed to supply the circuit and output the results
#include <iostream>

using namespace std;

int main()
{
    double current, resistance, voltage;

    cout << "Enter Current (in Amps), Resistance (in ohms): " << endl;
    cin >> current >> resistance;
    voltage = current * resistance;
    cout << "V = IR = " << voltage << " volts " << endl;
    return 0;
}
