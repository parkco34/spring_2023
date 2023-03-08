//Write a program that prompts the user to enter:
//
//    The total number of units.
//    The rent to occupy all the units.
//    Amount to maintain a rented unit.
//    The increase in rent that results in a vacant unit.
//
//The program then outputs:
//
//    The number of units to be rented to maximize the profit
//    The maximum profit
//
//    Since your program handles currency, make sure to use a data type that can store decimals with a decimal precision of 2.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
}

// Correct program:
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    int total_units;
//    double rent, maintenance, rent_increase, profit, max_profit = 0;
//    int rented_units, max_rented_units;
//
//    cout << "Enter the total number of units: ";
//    cin >> total_units;
//
//    cout << "Enter the rent to occupy all the units: ";
//    cin >> rent;
//
//    cout << "Enter the amount to maintain a rented unit: ";
//    cin >> maintenance;
//
//    cout << "Enter the increase in rent that results in a vacant unit: ";
//    cin >> rent_increase;
//
//    for (rented_units = total_units; rented_units >= 0; rented_units--) {
//        profit = (rent + (rent_increase * (total_units - rented_units))) * rented_units - (maintenance * rented_units);
//        if (profit > max_profit) {
//            max_profit = profit;
//            max_rented_units = rented_units;
//        }
//    }
//
//    cout << "The number of units to be rented to maximize the profit: " << max_rented_units << endl;
//    cout << fixed << setprecision(2) << "The maximum profit: $" << max_profit << endl;
//
//    return 0;
//}
//
