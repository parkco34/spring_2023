//Write a program to calculate students’ average test scores and their grades from ch8_Ex13Data.txt file.
//Use three arrays: 
//    a one-dimensional array to store the students’ names, 
//    a (parallel) two-dimensional array to store the test scores, 
//    and a parallel one-dimensional array to store grades.
//
//Your program must contain at least the following functions:
//    a function to read and store data into two arrays
//    a function to calculate the average test score and grade
//    a function to output the results.
//
//Have your program also output the class average. Use the following scale to determine the letter grade: 90%–100%, A; 80%–89.99%, B; 70%–79.99%, C; 60%–69.99%, D; and 0%–59.99%, F .
//Format your output with setprecision(2) to ensure the proper number of decimals for testing!
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

const int KIDS = 10;
const int TESTS = 5;

// Iterates thru a string, collecting the portion: first to character before a space (arr[0] -> ' ')
// and stores it in an STRING
string getNames(string line)
{
    string name = "";
    size_t pos = line.find(' '); // Index of the first space in the ine

    // Adds letters to names until a space is found
    for (int i=0; i < line.length(); i++) {
        if (line[i] != line[pos]) {
            name += line[i];
        }
        else
            break;
    }

    return name;
}

// After the first space, get every integer (converted), and skip each space in between
string getScores(string& line)
{
    string digits;
    bool found = false;
    
    for (int i=0; i < line.length(); i++) {
        if (line[i] == ' ') {
            break; // Leave loop when out of digits
        }
        else {
            continue; // Skip spaces
        }

        if (line[i] >= '0' && line[i] <= '9') {
            digits += line[i];
            found = true;
        }
    } 
    cout << "\nDigits: " << digits << endl;
    return digits;
}

// the real main
void readLines(istream& input)
{
    string line;
    while(getline(input, line)) {
        cout << "Name: " << getNames(line) << endl;
        cout << "Score: " << getScores(line) << endl;
    }
}

int main()
{
    ifstream infile("ch8_Ex13Data.txt");
    // Checks to see if the path is valid
    if (!infile) {
        cout << "Unable to open file! " << endl;
        exit(1);
    }
    
    // Open says me
    readLines(infile);
}
