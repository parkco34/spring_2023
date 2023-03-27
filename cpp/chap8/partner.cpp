// Hangman game
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cctype>

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

void updateBlanks(string theWord, string& blanks, char& guessedLetter)
{
    for (int i=0; i < theWord.length(); i++) {
        if (guessedLetter == theWord[i]) {
            blanks[i] = guessedLetter;
        }
     }   
}

// Reads textfile to generate the random word
string get_word(int max_strings)
{
    ifstream infile("words.txt");

    // Check that file opened correctly
    if (!infile) {
        cout << "Failed to open file" << endl;
        return "";
    }

    string words[max_strings];
    // Generates random seed based on current time
    srand(time(0));
    int count = 0;
    string word;

    /* Randomly selects words from a textfile of any 
     * number of words and stores them in array    ᕙ(▀̿̿Ĺ̯̿̿▀̿ ̿) ᕗ */
    while(getline(infile, word)) {
        if (rand() % (count + 1) < max_strings) {

            if (count < max_strings) {
                words[count] = word;
            }
            else {
                int randIndx = rand() % max_strings;
                words[randIndx] = word;
            }
        }
        count++;
    }

    return words[rand() % max_strings];
}

int main()
{
    const int MAX_STRINGS = 20;
    string blanks = get_blanks(get_word(MAX_STRINGS));  // Fill length of word with asterisks
    string word = get_word(MAX_STRINGS); // Randomly selects word
    int guesses = word.length();
    string guessed;  // Holds all the guessed letters
    char guessedLetter; // Current guessed letter

    // Game loop
    while(blanks != word && guesses > 0) {
        cout << "The word: " << blanks << endl;
        cout << "Guess a letter: " << endl;
        cin >> guessedLetter;
        guessedLetter = tolower(guessedLetter);

        // If player gets the word, quit game
        if (blanks == word) {
            cout << "Congrats!  You got it!! " << endl;
            cout << "The word: " << word << endl;
            break;
        }

        while(guessed.find(guessedLetter) != string::npos) {
            cout << "You've already guessed that letter, yo ..." << endl;
            cin >> guessedLetter;
            guessedLetter = tolower(guessedLetter);
            guesses--;
        }
 
        if (word.find(guessedLetter) != string::npos) {
            cout << "Nice! You guessed right " << endl;
            updateBlanks(word, blanks, guessedLetter);
        }
        else {
            cout << "Lo Siento ... " << endl;
        }
        guessed += guessedLetter;   // Add guessed letter to the string of guesses
        guesses--;

        cout << "Guesses: " << guesses << endl;
    }

    if (word != blanks) {
        cout << "You're dead!  (╯ ͠° ͟ʖ ͡°)╯┻━┻ " << endl;
        cout << "\n   Word: " << word << endl;
    }

    return 0;
}
