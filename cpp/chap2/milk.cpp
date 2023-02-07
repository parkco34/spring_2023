// Cory Parker
// CSC-223
//Write a program that prompts the user to enter:
//    The total amount of milk produced in the morning (in liters).
//    The cost of producing one liter of milk.
//    The profit on each carton of milk.
//The program then outputs:
//    The number of milk cartons needed to hold milk.
//        Round your answer to the nearest integer.
//    The cost of producing milk.
//    The profit for producing milk.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float CARTON = 3.78;   // Milk carton in liters
    float amount; // amount of milk produced in liters
    float cost; // cost of producing one liter of milk
    double profit;

    cout << "Enter total amount of milk produced in the morning: " << endl;
    cin >> amount;
    cout << "Enter cost of producing one liter of milk: " << endl;
    cin >> cost;
    cout << "Enter the profit of each carton of milk: " << endl;
    cin >> profit;
    double profit_carton = profit * round(amount / CARTON);

    cout << "The number of milk cartons needed to hold the milk: " << round(amount / CARTON) << endl;
    cout << "Cost of producing milk: $ " << (cost * amount) << "." << endl;
    cout << "The profit for producing milk: $ " << profit_carton << " per carton." << endl;
}
