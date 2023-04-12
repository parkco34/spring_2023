#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>
#include <iomanip>

using namespace std;

struct LetterInfo {
    int count;
    double percent;
};

void openFile(ifstream& inFile, ofstream& outFile) {
    string inFileName, outFileName;
    inFileName = "Ch9_Ex6Data.txt";
    outFileName = "Ch9_Ex6Data.dat";
    inFile.open(inFileName);
    if (!inFile) {
        cerr << "Error: could not open input file \"" << inFileName << "\"" << endl;
        exit(1);
    }
    outFile.open(outFileName);
    if (!outFile) {
        cerr << "Error: could not open output file \"" << outFileName << "\"" << endl;
        exit(1);
    }
}

/*
 * The index is computed using the ASCII value of the character. If the character is an uppercase letter, the ASCII value of 'A' (65) is subtracted from the character's ASCII value to get a zero-based index into the first half of the letters array. If the character is a lowercase letter, the ASCII value of 'a' (97) is subtracted from the character's ASCII value, and 26 is added to the result to get a zero-based index into the second half of the letters array.
 */
void count(ifstream& inFile, LetterInfo letters[]) {
    char c;
    while (inFile.get(c)) {
        if (isalpha(c)) {
            int index = isupper(c) ? c - 'A' : c - 'a' + 26;
            letters[index].count++;
        }
    } 
}

void printResult(ofstream& outFile, LetterInfo letters[]) {
    int totalCaps = 0, totalLowers = 0;
    for (int i = 0; i < 52; i++) {
        if (isupper(i + 'A')) {
            totalCaps += letters[i].count;
//            cout << "Capital Letter: " << (i +  'A') << endl;
        } else {
            totalLowers += letters[i].count;
//            cout << "Lowercase Letter: " << (i +  'a') << endl;
        }
    }

    outFile << fixed << setprecision(2);
    outFile << "Letter  Count   Percent\n";

    for (int i = 0; i < 26; i++) {
        double percentage1 = (double)letters[i].count / (totalLowers + totalCaps) * 100;
        double percentage2 = (double)letters[i+26].count / (totalLowers + totalCaps) * 100;
//        double capPercent = (double)letters[i].count / totalCaps * 100;
//        double lowerPercent = (double)letters[i + 26].count / totalLowers * 100;
        outFile << (char)(i + 'A') << " " << letters[i].count << " " << percentage1 << "%\n";
        outFile << (char)(i + 'a') << " " << letters[i + 26].count << " " << percentage2 << "%\n";
    }
}

int main() {
    ifstream inFile;
    ofstream outFile;
    openFile(inFile, outFile);
    LetterInfo letters[52] = {}; // initialize all counts to 0
                                 
    count(inFile, letters);
    printResult(outFile, letters);
    return 0;
}


