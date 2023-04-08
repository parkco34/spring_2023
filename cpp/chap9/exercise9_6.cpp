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
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

const int ALPHABET = 26;

struct letters {
    int upperCount;
    int lowerCount;
};

// function prototypes
void openFile(ifstream& infile);
void count(ifstream& infile, letters myLetters[]);
void printResult(letters myLetters[]);

int main()
{
    ifstream infile;
    openFile(infile);
    letters myLetters[2 * ALPHABET];
    count(infile, myLetters);
    printResult(myLetters);
}

// Opens file for reading
void openFile(ifstream& infile)
{
    infile.open("Ch9_Ex6Data.txt");
    // Ensure file can be opened
    if(!infile) {
        cerr << "File cannot be opened..." << endl;
        exit(1);
    }
}

/* Counts each occurence of uppper/lower case letters and stores them in 
 *  a struct array, along with the number of each occurence
 */
void count(ifstream& infile, letters myLetters[])
{
    char c;
    while (infile.get(c)) {
        /* As long as the character is a part of the Alphabet, 
         * add to corresponding counter, where c - 'A' is the index
         */
        if(isalpha(c)) {
            if(isupper(c)) {
                myLetters[c - 'A'].upperCount++;
            }
            else if (islower(c)) {
                myLetters[c - 'a'].lowerCount++;
            }
            else
                continue;
        }
    }
}

//Prints the number of capital letters and small letters, as well as the percentage of
//  capital letters for every letter A-Z and the percentage of small letters for every letter a-z
void printResult(letters myLetters[])
{
    cout << setw(10) << "Letter" << setw(10) << "Uppercase" << setw(10) << "Lowercase" << setw(15) << "Uppercase %" << setw(15) << "Lowercase %" << endl;
    for(int i = 0; i < (2  * ALPHABET); i++) {
        int total = myLetters[i].upperCount + myLetters[i].lowerCount;  // Sample Space
        if(total > 0) {
//            cout << "Upper: " << myLetters[i].upperCount << endl;
//            cout << "Lower: " << myLetters[i].lowerCount << endl;
            // Percentages
            double upperPct = 100.0 * myLetters[i].upperCount / total;
            double lowerPct = 100.0 * myLetters[i].lowerCount / total;
            cout << setw(10) << myLetters[i].upperCount << setw(10) << myLetters[i].lowerCount << setw(15) << fixed << setprecision(2) << upperPct << "%" << setw(15) << fixed << setprecision(2) << lowerPct << "%" << endl;
        }
    }
}

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//#include <iostream>
//#include <string>
//#include <iomanip>
//#include <fstream>
//
//using namespace std;
//
//struct letters {
//    char letter;
//    int count;
//};
//
//// function prototypes
//int openFile(ifstream& infile);
//void count(letters myLetters[], string line, const int SIZE);
//void printResult(letters myLetters[]);
//
//int main()
//{
//    ifstream infile("Ch9_Ex6Data.txt");
//
//    const int LINES = openFile(infile);
//    letters myLetters[LINES];
//}
//
//// Opens file for reading
//int openFile(ifstream& infile)
//{
//    // Ensure file can be opened
//    if(!infile) {
//        cerr << "File cannot be opened..." << endl;
//    }
//
//    string line;
//    int totalLines = 0;
//    while(getline(infile, line)) {
//        totalLines++;
//    }
//    return totalLines;
//}
//
//void count(letters myLetters[], string line, const int SIZE)
//{
//    for (int i=0; i < SIZE; i++) {
//        cout << myLetters[i] << endl;
//    }
//}
