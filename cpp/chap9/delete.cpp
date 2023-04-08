#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string shit;
    cout << "Enter some shit: " << endl;
    cin >> shit;

    if (shit.substr(0, 4) == "rush") {
        cout << "YEs" << endl;
    }
}
