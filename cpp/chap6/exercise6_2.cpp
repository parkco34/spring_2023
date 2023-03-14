#include <iostream>
#include <iomanip>
using namespace std;

bool isVowel(char letter)
{
    if (letter == 'e' || letter == 'E' || letter == 'A' || letter == 'a'
            || letter == 'I' || letter == 'i' || letter == 'O' || letter == 'o'
            || letter == 'u' || letter == 'U' || letter == 'y' || letter ==  'Y') {
        cout << letter << " is a vowel: " << true << endl;
        return true;
    } else {
        cout << letter << " is a vowel: " << false << endl;
        return false;
    }
}

int main()
{
  char letter;
  cin >> letter;
  isVowel(letter);
}

