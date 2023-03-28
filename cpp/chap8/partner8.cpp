#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main() {
   ifstream inFile;
   inFile.open("words.txt");
   
   string wordList[20];
   
   for(int i = 0; i < 20; i++) {
      getline(inFile, wordList[i]);
   }
   
   srand(time(0)); 
   
   char replay;
   
   do {
      int randomNumber = (rand() % 20);   
      string chosenWord = wordList[randomNumber];
   
      string guess = "";
      string temp, temp2, attempt;
      int misses = 0;
   
      for(int i = 0; i < chosenWord.length(); i++) {
         guess += "*";
      }
   
      while(guess != chosenWord) {
         cout << "Guess the letters in the word: " << guess << " - ";
         cin >> attempt;
         if(chosenWord.find(attempt) == string::npos) {
            cout << attempt << " is not in the word!" << endl;
            misses++;
         }
         else {
            temp = chosenWord;
            temp2 = "";
            while(temp.find(attempt) != string::npos) {
               guess = guess.substr(0, temp.find(attempt)) + attempt + guess.substr(temp.find(attempt) + 1, guess.length());
               temp2.append(temp.find(attempt) + 1, '&');
               temp = temp2 + temp.substr(temp.find(attempt) + 1, temp.length());
            }
         }
      }
      cout << "You did it! The word was " << chosenWord << "!\nYou missed " << misses << " times.\nDo you want to play again? (y/n) - ";
      cin >> replay;
   } while(replay == 'y');
   cout << "Goodbye!";     
   
   return 0;
}
