// Show the customer the different breakfast items offered by the restaurant.
// Allow the customer to select more than one item from the menu.
// Calculate and print the bill.
//
// Function getData: This function loads the data into the array menuList.
// Function showMenu: This function shows the different items offered by the restaurant and tells the user how to select the items.
// Function printCheck: This function calculates and prints the check. (Note that the billing amount should include a 5% tax.)
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

struct menuItemType {
    string menuItem;
    double menuPrice;
};

void getData(string menuList[8])
{
    string line;
    int count = 0;
    ifstream infile("Ch9_Ex4Data.txt");

    // Ensure file is openable
    if (!infile) {
        cerr << "Oops!  Unable to open file." << endl;
    }

    while(getline(infile, line)) {
        if (count % 2 == 0) {
            menuList[count++] = line;
            cout << menuList[count] << endl;
        }
    }
    
}

int main()
{
    string menuList[8];
    getData(menuLIst[8]);
    return 0;
}
