#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int reverseDigit(int number)
{
    string newNum = "";
    string strNum = to_string(number);
    for (int i=strNum.length()-1; i >= 0; i--) {

        // Check if the first digits are zeros
        if (i == strNum.length()-1 && strNum[i] == '0')
            continue;

        newNum += strNum[i];
    }
    
    if (number < 0)
        return -1 * stoi(newNum);
    else
        return stoi(newNum);
}

int main()
{
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;

    int newNum = reverseDigit(number);

    cout << "The new number is: " << newNum << endl;

    return 0;
}

