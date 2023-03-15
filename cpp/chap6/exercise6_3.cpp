#include <iostream>

using namespace std;

bool isVowel(char);

int main() {
    string str;
    int vowelCount = 0;

    cout << "Enter a sequence of characters: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (isVowel(str[i])) {
            vowelCount++;
        }
    }

    cout << "There are " << vowelCount << " vowels in this sentence." << endl;

    return 0;
}

bool isVowel(char letter)
{
    if (letter >= 'a' && letter <= 'z') {
        letter -= 32;
    }

    if (letter == 'A' || letter == 'E' || letter == 'I'
            || letter == 'O' || letter == 'U')
        return true;
    else
        return false;
}

