//Modify the function isPalindrome of Example 6-6 so that when determining whether a string is a palindrome, cases are ignored, that is, uppercase and lowercase letters are considered the same.
#include <iostream>

using namespace std;

bool isPalindrome(string str)
{
int length = str.length();
for (int i = 0; i < length / 2; i++) {
    if (str[i] != str[length – 1 – i]) {
         return false;
    } // if
  } // for loop
 return true;
}// isPalindrome
 

int main()
{

}
