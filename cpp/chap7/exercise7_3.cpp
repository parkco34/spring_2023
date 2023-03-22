// =========================================================================================================
// Pig Latin
// 1. If a word starts with a consonant and a vowel, 
//  put the first letter of the word at the end of the word and add "ay."
// 2. If a word starts with two consonants move the two consonants to the end of the word and add "ay."
// 3. If a word starts with a vowel add the word "way" at the end of the word.
// =========================================================================================================
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to convert a single word to Pig Latin
void pig_latin(string word)
{
    //    find is used to find the first occurrence of a sub-string in the specified string being called upon. 
    //        It returns the index of the first occurrence of the substring in the string from the given starting position. 
    //        The default value of starting position is 0.
    string vowels = "aeiouAEIOU";

    // if word starts with a consanant and a vowel
    for (int i = 0; i <= vowels.length(); i++) {
        if (word[0] == vowels[i] || word[1] == vowels[i]) {
            return word 
        }
    }
}

int main() 
{
    string word;
    cout << "Enter a word" << endl;
    cin >> word;
    pig_latin(word);
}

