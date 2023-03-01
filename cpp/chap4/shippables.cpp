// Cory Parker
// CSC-223 Purchase Order
//  Write a program to input a customer’s total purchase amount. 
//  Tax on the purchase is 7.5%. If the customer’s purchase is $50.00 or more, shipping is free. 
//  Otherwise, shipping is a flat $5.99. The program should output the purchase amount, tax, shipping, and total

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double purchase_amount, tax, shipping_cost, total_cost;
    
    // Input the purchase amount
    cout << "Enter the total purchase amount: $";
    cin >> purchase_amount;
    
    // Calculate tax
    tax = purchase_amount * 0.075;
    
    // Calculate shipping cost
    if (purchase_amount >= 50.0) {
        shipping_cost = 0.0;
    } else {
        shipping_cost = 5.99;
    }
    
    // Calculate total cost
    total_cost = purchase_amount + tax + shipping_cost;
    
    // Output the details
    cout << " ========================================== " << endl;
    cout << fixed << setprecision(2);
    cout << "Purchase amount: $" << purchase_amount << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Shipping cost: $" << shipping_cost << endl;
    cout << "Total cost: $" << total_cost << endl;
    cout << " ========================================== " << endl;
    
    return 0;
}
