#include <iostream>
#include <string>
#include "bankAccount.h"

using namespace std;

int main() {
    bankAccount customers[10]; // array of 10 bankAccount objects
    int choice;
    int numCustomers = 0;

    do {
        cout << "1: Enter 1 to add a new customer." << endl;
        cout << "2: Enter 2 for an existing customer." << endl;
        cout << "3: Enter 3 to print customers data." << endl;
        cout << "9: Enter 9 to exit the program." << endl;
        cin >> choice;

        switch (choice) {
            case 1: // add a new customer
                if (numCustomers < 10) {
                    string name, accountType;
                    double balance, interest;

                    cout << "Enter customer's name: ";
                    cin.ignore();
                    getline(cin, name);

                    cout << "Enter account type (checking/savings): ";
                    cin >> accountType;

                    cout << "Enter amount to be deposited to open account: ";
                    cin >> balance;

                    cout << "Enter interest rate (as a decimal number): ";
                    cin >> interest;
                    customers[numCustomers] = bankAccount(name, balance, interest);
                    customers[numCustomers].setAccountType(accountType);

                    cout << "Customer added successfully!" << endl;

                    numCustomers++;
                }
                else {
                    cout << "Cannot add more customers. Array is full." << endl;
                }
                break;

            case 2: // update an existing customer
                if (numCustomers > 0) {
                    int accountNum;

                    cout << "Enter account number: ";
                    cin >> accountNum;

                    bool found = false;
                    for (int i = 0; i < numCustomers; i++) {
                        if (customers[i].getAccountNum() == accountNum) {
                            found = true;

                            string name, accountType;
                            double balance, interest;

                            cout << "Enter customer's name: ";
                            cin.ignore();
                            getline(cin, name);

                            cout << "Enter account type (checking/savings): ";
                            cin >> accountType;

                            cout << "Enter balance: ";
                            cin >> balance;

                            cout << "Enter interest rate (as a decimal number): ";
                            cin >> interest;

                            customers[i].setName(name);
                            customers[i].setAccountType(accountType);
                            customers[i].setInterest(interest);

                            cout << "Customer updated successfully!" << endl;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Customer not found." << endl;
                    }
                }
                else {
                    cout << "No customers to update." << endl;
                }
                break;

            case 3: // print all customers
                if (numCustomers > 0) {
                    for (int i = 0; i < numCustomers; i++) {
                        customers[i].printAccountInfo();
                    }
                }
                else {
                    cout << "No customers to print." << endl;
                }
                break;

            case 9: // exit the program
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 9);

    return 0;
}

