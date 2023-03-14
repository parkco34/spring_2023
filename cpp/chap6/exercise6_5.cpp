#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

bool is_whitespace(char c)
{
    if (c == ' ' || c == '\t' || c == '\n' || c == '\r') {
        cout << "The character you entered is a whitespace character" << endl;
        return true;

    } else {
        cout << "The character you entered is not a whitespace character" << endl;
        return false;
    }
}

bool floor_product(double num1, double num2, double num3)
{
    if (floor(num1 * num2) == floor(num3)) {
        cout << "The product of the first two numbers is equal to the floor of the third number" << endl;
        return true;
    }
    else {
        cout << "The product of the first two numbers is not equal to the floor of the third number" << endl;
        return false;
    }
}

int main()
{
    string input;
    double num1, num2, num3;

    getline(cin,input);
    char c = input[0];
    cin >> num1 >> num2 >> num3;

    is_whitespace(c);
    floor_product(num1, num2, num3);
}
