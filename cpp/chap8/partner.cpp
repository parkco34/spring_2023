// Hangman game
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    const int MAX_STRINGS = 20;
    int count = 0;
    ifstream infile("words.txt");
    string words[MAX_STRINGS];
    int indices[MAX_STRINGS];

    // Generates random seed based on current time
    srand(time(NULL));

    // Build array with the 20 elements from word textfile
    //  ~~~~~~~~~~~~~~  PLAN    ~~~~~~~~~~~~~~~~~~~~~~
    // ==> Get number of words in file
    // ==> Use that number to shuffle between 0 and the MAX for iNDICES
    // ==> Build array using the randomized indices
    // Randomly select the words in array


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
