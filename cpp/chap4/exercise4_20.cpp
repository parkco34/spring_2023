//===============================================
//Write a program that prompts the user to enter:
//    The cost of renting one room
//    The number of rooms booked
//    The number of days the rooms are booked
//    The sales tax (as a percent).
//------------------------------------------------
//The program outputs:
//    The cost of renting one room
//    The discount on each room as a percent
//    The number of rooms booked
//    The number of days the rooms are booked
//    The total cost of the rooms
//    The sales tax
//    The total billing amount.
//
//    Rooms booked and discounts:
//      atleast 10 => 10% 
//      atleast 20 => 20%
//      atleast 30 => 30%
//
//  If rooms are booked for at least three days, 
//  then there is an additional 5% discount.
//===============================================
#include <iostream>
#include <iomanip>

using namespace std;

// Constants
const double TEN_DISCOUNT = 0.1;
const double TWENTY_DISCOUNT = 0.2;
const double THIRTY_DISCOUNT = 0.3;
const double EXTRA_DISCOUNT = 0.05;

int main()
{
    double rent, salesTax, discount, totalCost, totalBilling;
    int rooms, days;

    cout << "Please enter following:\nCost of rental room: " << endl;
    cin >> rent;
    cout << "number of rooms booked: " << endl;
    cin >> rooms;
    cout << "Number of days the rooms are booked: " << endl;
    cin >> days;
    cout << "Sales tax (in percent %): " << endl;
    cin >> salesTax;
    salesTax /= 100.0;
    cout << "Sale tax: " << salesTax << endl;

    // Calculations
    if (rooms >= 30)
        discount = THIRTY_DISCOUNT;
    else if (rooms >= 20)
        discount = TWENTY_DISCOUNT;
    else if (rooms >= 10)
        discount = TEN_DISCOUNT;
    else
        discount = 0;

    if (days >= 3)
        discount += EXTRA_DISCOUNT;

    double cost = (rent * rooms) * days;
    totalCost = cost - (discount * cost);
    double tax = totalCost * salesTax;
    totalBilling = totalCost + tax;

    cout << "\nCost to rent room: " << showpoint << rent << endl;
    cout << "Discount on each room: " << showpoint << (discount * 100.0) << endl;
    cout << "Number of rooms booked: " << rooms << endl;
    cout << "Number of days booked for: " << days << endl;
    cout << "Total Cost of rooms: " << showpoint << totalCost << endl;
    cout << "Sale tax: " << showpoint << tax << endl;
    cout << "Total Billing: " << showpoint << totalBilling << endl;
}
