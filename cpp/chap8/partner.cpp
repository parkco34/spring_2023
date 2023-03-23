// Hangman game
#include <random>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream infile("words.txt");
    string words[20];
    int index = rand() % 20;    // This is being used incorrectly

    for (int i=0; i<=19; i++) {
        getline(infile, words[i]);
    }

    // Randomly slected word
    string word = words[index];
//    string blank;
//   
//    // Asterisks for blank positions
//    for (int i=0; i < word.length(); i++) {
//        blank += "*";
//    }
//
//    string letter;  // Letter guess
//    string guess;   // Word guess
//    while(guess != word) {
//        cout << "Guess a letter: " << endl;
//        cin >> letter;
//
//        // Look thru the word to see if letter is in it
//        for (int i=0; i<word.length(); i++) {
//            blank.replace(i, 1, word);
//
//            cout << "Blank: " << blank << endl;
//            cout << "Guess: " << guess << endl;
//        }
//    }

    return 0;
}
