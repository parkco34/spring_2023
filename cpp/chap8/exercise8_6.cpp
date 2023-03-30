// ========================================================================
//The students’ IDs and test answers are stored in a file.
//The first entry in the file contains answers to the test in the form: TFFTFFTTTTFFTFTFTFTT
//Every other entry in the file is the student ID, followed by a
//    blank, followed by the student’s responses.
// The exam has 20 questions, and the class has more than 150 students.
//
//Write a program that processes the test data.
//The output should be the student’s ID, followed by the answers, followed by the test score, followed by the test grade.
//Assume the following grade scale:
//    90%–100%, A
//    80%–89.99%, B
//    70%–79.99%, C
//    60%–69.99%, D
//    0%–59.99%, F
// ========================================================================
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    const int MAX_LINES = 5;
    const int KIDS = 4;
    const int QUESTIONS = 30;
    char answers[QUESTIONS];

    ifstream infile("Ch8_Ex6Data.txt");
    // Check if file opens properly
    if(!infile) {
        cerr << "Unable to open file ... " << endl;
        return 1;
    }

    string line;
    int counter = 0;
    while(getline(infile, line)) {
        // Get Teacher's answers
        if (counter == 0) {
            // Store teachers' answers in char array
            for (int i=0; i < line.length(); i++) {
                answers[i] = line[i];
//                cout << answers[i] << " ";
            }
            answers[line.length()] = '\0';
            counter++;
        }
        else {
            // get Ids
            // SOmehow ....
        }

    }

    return 0;
}

