// Hangman game
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

// 1) Randomly fill in array with words from textfile
// 2) Update blanks with corresponding letters
// 3) End game when number of attempts been reached or guess == word

// Generate blanks for word
string get_blanks(string theWord)
{
    string blanks;
    for (int i=0; i < theWord.length(); i++) {
        blanks += "*";
    }

    return blanks;
}

void updateBlanks(string word, string& blanks, char& guessedLetter)
{
    for (int i=0; i<word.length(); i++) {
        if (guessedLetter == word[i]) {
            blanks[i] = guessedLetter;
        }
    }
}

int main()
{
    const int MAX_STRINGS = 20;
    int count = 0;
    ifstream infile("words.txt");
    string words[MAX_STRINGS];

    // Generates random seed based on current time
    srand(time(0));

    // Check that file opened correctly
    if (!infile) {
        cout << "Failed to open file" << endl;
        return 1;
    }

    string word;
    /* Randomly selects words from a textfile of any 
     * number of words and stores them in array    ᕙ(▀̿̿Ĺ̯̿̿▀̿ ̿) ᕗ */
    while(getline(infile, word)) {
        if (rand() % (count + 1) < MAX_STRINGS) {

            if (count < MAX_STRINGS) {
                words[count] = word;
            }
            else {
                int randIndx = rand() % MAX_STRINGS;
                words[randIndx] = word;
            }
        }
        count++;
    }

    string blanks = get_blanks(words[rand() % 20]);
    cout << "Blanks: " << blanks << endl;

    return 0;
}
