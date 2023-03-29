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
// 1) Store answers and Students ID along with their answers in array and compare
// 2) Test Score point system: Correct answers: +2; Incorrect answers: -1; No answer (blank space): 0
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

string split_array(string line, bool id=true)
{
    /* If id is false, return the second
     */
    size_t pos = line.find(' '); // Find blank space to know when to append student's answers to array
    if (pos != string::npos) {
        id = line.substr(0, pos);
        string substring = line.substr(pos+1);
}

int main()
{
    const int QUESTIONS = 20;
    char correct[QUESTIONS]; // Correct answers
    string id, line;
    char grades[1][QUESTIONS]; // Student's ID and grade
    char grade;
    int counter = 0;
    ifstream infile("Ch8_Ex6Data.txt");

    // Ensure file opens properly and exists
    if (!infile) {
        cout << "Lo Siento ... Failed to open file" << endl;
        return 1;
    }

    while(getline(infile, line)) {
        if (counter == 0) {
            // Store correct answers in array for comparison
            for (int i=0; i < line.length(); i++) {
                correct[i] = line[i];
            }
        }

        counter++;
    }

    return 0;
}

