#include <iostream>
using namespace std;

int main() {
    // Print uppercase letters and their ASCII values
    cout << "Uppercase letters:\n";
    for (char c = 'A'; c <= 'Z'; c++) {
        cout << c << " " << (int)c << endl;
    }

    // Print lowercase letters and their ASCII values
    cout << "\nLowercase letters:\n";
    for (char c = 'a'; c <= 'z'; c++) {
        cout << c << " " << (int)c << endl;
    }

    return 0;
}

