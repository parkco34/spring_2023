#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int sum = 0;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    for (int i = 0; i < str.length(); i++) {
        sum += int(str[i]); // add the ASCII value of each character to the sum
    }
    
    cout << "Sum of ASCII values of characters in the string: " << sum << endl;
    
    return 0;
}

