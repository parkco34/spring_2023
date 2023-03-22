#include <iostream>
#include <string>

using namespace std;

// Search and replace function
void search_replace(string& phrase, string old_word, string new_word) {
    size_t pos = 0;
    while ((pos = phrase.find(old_word, pos)) != string::npos) {
        phrase.replace(pos, old_word.length(), new_word);
        pos += new_word.length();
    }
}

int main() {
    // Read input from user
    string phrase, old_word, new_word;
    cout << "Enter phrase: ";
    getline(cin, phrase);
    cout << "Word to replace: ";
    getline(cin, old_word);
    cout << "New word: ";
    getline(cin, new_word);
    
    // Call search and replace function
    search_replace(phrase, old_word, new_word);
    
    // Output result
    cout << "Result: " << endl << phrase << endl;
    
    return 0;
}

