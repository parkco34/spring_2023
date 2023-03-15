#include <iostream>
#include <string>

using namespace std;

int countVowels(string str, char vowel) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str.at(i) == vowel) {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a string: " << endl;
    getline(cin, input);
    cout << "The number of a's: " << countVowels(input, 'a') << endl;
    cout << "The number of e's: " << countVowels(input, 'e') << endl;
    cout << "The number of i's: " << countVowels(input, 'i') << endl;
    cout << "The number of o's: " << countVowels(input, 'o') << endl;
    cout << "The number of u's: " << countVowels(input, 'u') << endl;
    return 0;
}

