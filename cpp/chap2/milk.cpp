//Write a program that prompts the user to enter:
//
//    The total amount of milk produced in the morning.
//
//    The cost of producing one liter of milk.
//
//    The profit on each carton of milk.
//
//The program then outputs:
//
//    The number of milk cartons needed to hold milk.
//        Round your answer to the nearest integer.
//
//    The cost of producing milk.
//
//    The profit for producing milk.
#include <iostream>
#include <cmath>

using namespae std;

int main()
{
    const float CARTON = 3.78   // MIlk carton in liters
    float milk;
    double cost;
    double profit;

    cout << "Enter total amount of milk produced in the morning: " << endl;
    cin >> milk;
    cout << "Enter cost of producing one liter of milk: " << endl;
    cin >> cost;
    cout << "Enter the profit of each carton of milk: " << endl;
    cin >> profit;

    cout << "The number of milk cartons needed to hold the milk: " << round(milk / CARTON) << endl;

}
