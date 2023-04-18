//Write a program whose main function is merely a collection of variable declarations and function calls. 
// THIS PROGRAM READS A TEXT AND OUTPUTS THE LETTERS, TOGETHER WITH THEIR COUNTS, as explained below in the function printResult. 
//(There can be NO GLOBAL VARIABLES! 
// All information must be passed in and out of the functions. USE A STRUCTURE to store the information.) 
//
//Your program must consist of at least the following FUNCTIONS:
//
//    - openFile: Opens the input and output files. 
//        You must pass the file streams as parameters (by reference, of course). 
//        If the file does not exist, the program should print an appropriate message ("The input file does not exist.") and exit.
//    
//    - count: Counts every occurrence of capital letters A-Z and small letters a-z in the text 
//        file opened in the function openFile. 
//        This information must go into an ARRAY OF STRUCTURES. 
//        The array must be passed as a parameter, and the file identifier must also be passed as a parameter.
//
//    - printResult: Prints the number of capital letters and small letters, as well as the percentage of 
//        capital letters for every letter A-Z and the percentage of small letters for every letter a-z. 
//        The percentages should look like this: "25%".
//        This information must come from an ARRAY OF STRUCTURES, and this array must be passed as a parameter.
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
    cout << "Enter your file name: " << endl;
    cin >> inFileName;
    if (inFileName.length() < 3) {
        inFileName = "Ch9_Ex6Data.txt";
    }
    outFileName = "outfile.txt";

    inFile.open(inFileName);
    if (!inFile) {
        cerr << "The input file does not exist \"" << inFileName << "\"" << endl;
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
    cout << fixed << setprecision(2);
    outFile << "Letter  Count   Percent\n";

    for (int i = 0; i < 26; i++) {
        double percentage1 = (double)letters[i].count / (totalLowers + totalCaps) * 100;
        double percentage2 = (double)letters[i+26].count / (totalLowers + totalCaps) * 100;
//        double capPercent = (double)letters[i].count / totalCaps * 100;
//        double lowerPercent = (double)letters[i + 26].count / totalLowers * 100;
        outFile << (char)(i + 'A') << "\t" << letters[i].count << "\t" << percentage1 << "%\n";
        outFile << (char)(i + 'a') << "\t" << letters[i + 26].count << "\t" << percentage2 << "%\n";
        cout << (char)(i + 'A') << "\t" << letters[i].count << "\t" << percentage1 << "%\n";
        cout << (char)(i + 'a') << "\t" << letters[i + 26].count << "\t" << percentage2 << "%\n";
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


