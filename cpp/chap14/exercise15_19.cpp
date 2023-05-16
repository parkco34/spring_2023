#include <iostream>
#include <string>

using namespace std;

string toBase(int num, int base) {
    string str = "";

    // Define the characters for digits > 9
    char chars[6] = {'A', 'B', 'C', 'D', 'E', 'F'};

    // Base case
    if(num == 0)
        return "";

    int remainder = num % base;

    // For hexadecimal
    if(remainder >= 10)
        str += chars[remainder-10];
    else
        str += to_string(remainder);

    return toBase(num / base, base) + str;
}

int main() {
    int num, base;

    // Prompt the user for a decimal number
    cout << "Enter a decimal number: ";
    cin >> num;

    // Prompt the user for the base to convert to
    cout << "Enter base 8 or 16: ";
    cin >> base;

    // Check if the base is valid
    if(base != 8 && base != 16) {
        cout << "Invalid base! Base must be 8 or 16.";
        return 0;
    }

    string result = toBase(num, base);

    // Print the converted number
    cout << "The number " << num << " in base " << base << " is: " << result;

    return 0;
}

