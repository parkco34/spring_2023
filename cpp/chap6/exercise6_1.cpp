//Modify the function isPalindrome of Example 6-6 so that when determining whether a string is a palindrome, cases are ignored, that is, uppercase and lowercase letters are considered the same.
#include <iostream>
#include <string>

using namespace std;

string to_lower(string input) 
{
    for (int i=0; i < input.length(); i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] += 'a' - 'A';
        }
    }

    return input;
}

bool isPalindrome(string str) 
{
    for (int i=0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 'a' - 'A';
        }
    }

    int length = str.length(); 
    for (int i =0; i < length/2; i++) {
        if (str[i] != str[length -1-i]) {
            return false;
        } // if    
      } // for loop
    return true;
}// isPalindrome
 

int main()
{
    bool check;
    check = isPalindrome("Madam");
    if (check) {
        cout << "madam is a palindrome" << endl;
    }
    else {
        cout << "madam is not a palindrome" << endl;
    }

    check = isPalindrome("abBa");
    if (check) {
      cout << "abBa is a palindrome" << endl;
    }
    else {
      cout << "abBa isa palindrome" << endl;
    }

    check = isPalindrome("22");
    if (check) {
      cout << "22 is a palindrome" << endl;
    } else {
      cout << "22 is not a palindrome" << endl;
    }

    check = isPalindrome("67876");
    if (check) {
      cout << "67876 is a palindrome" << endl;
    }
    else {
      cout << "67876 is not a palindrome" << endl;
    }

    check = isPalindrome("444244");
    if (check) {
      cout << "444244 is a palindrome" << endl;
    }
    else {
      cout << "444244 is not a palindrome" << endl;
    }

    check = isPalindrome("trYmeuemyRT");
    if (check) {
      cout << "trYmeuemyRT is a palindrome" << endl;
    }
    else {
      cout << "trYmeuemyRT is not a palindrome" << endl;
    }

    return 0;
}

