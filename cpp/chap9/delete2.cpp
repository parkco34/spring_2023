#include <iostream>
#include <fstream>

using namespace std;

// define constant for number of letters
const int NUM_LETTERS = 26*2; // 26 letters for both capital and small

// define a struct to hold the letter count
struct LetterCount {
char letter;
int count;
};

// function to open input and output files
void openFile(ifstream& inFile, ofstream& outFile) {
string inFileName, outFileName;

// open input file
inFile.open("Ch9_Ex6Data.txt");
if (!inFile) { // if input file does not exist
cout << "The input file does not exist." << endl;
exit(1); // exit the program with error code 1
}
// open output file
outFile.open("Ch9_Ex6Data.dat");
}

// function to count the occurrences of each letter
void count(ifstream& inFile, LetterCount counts[]) {
char c;
while (inFile >> c) { // read each character in input file
if (c >= 'A' && c <= 'Z') { // if the character is a capital letter
counts[c-'A'].count++; // increment the count for that letter
} else if (c >= 'a' && c <= 'z') { // if the character is a small letter
counts[c-'a'+26].count++; // increment the count for that letter
}
}
}

// function to print the results to the output file
void printResult(ofstream& outFile, LetterCount counts[]) {
int numCapitals = 0;
int numSmalls = 0;
// count the total number of capital and small letters
for (int i = 0; i < NUM_LETTERS; i++) {
if (i < 26) {
numCapitals += counts[i].count;
} else {
numSmalls += counts[i].count;
}
}
// print the total number of capital and small letters to output file
outFile << "Number of capital letters: " << numCapitals << endl;
outFile << "Number of small letters: " << numSmalls << endl;
// print the count and percentage for each letter to output file
for (int i = 0; i < NUM_LETTERS; i++) {
if (counts[i].count > 0) {
double percent;
if (i < 26) {
percent = (double)counts[i].count / numCapitals * 100;
} else {
percent = (double)counts[i].count / numSmalls * 100;
}
outFile << counts[i].letter << ": " << counts[i].count << " (" << percent << "%)" << endl;
}
}
}

// main function

int main() {
    ifstream inFile;
    ofstream outFile;
    openFile(inFile, outFile);

    LetterCount counts[NUM_LETTERS];
    for (int i = 0; i < NUM_LETTERS; i++) {
        counts[i].letter = i < 26 ? 'A'+i : 'a'+i-26;
        counts[i].count = 0;
    }

    count(inFile, counts);
    printResult(outFile, counts);

    inFile.close();
    outFile.close();

    return 0;
}

