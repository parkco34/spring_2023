#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    const int NUM_QUESTIONS = 20;
    const int NUM_STUDENTS = 150;
    char answers[NUM_QUESTIONS];
    string studentData[NUM_STUDENTS];
    int scores[NUM_STUDENTS];
    char* studentAnswers[NUM_STUDENTS];

    // Open the file and read in the answers
    ifstream answerFile("answers.txt");
    answerFile >> answers;

    // Read in the student data
    ifstream studentFile("students.txt");
    int i = 0;
    while (!studentFile.eof()) {
        getline(studentFile, studentData[i]);
        i++;
    }
    studentFile.close();

    // Extract student answers and calculate scores
    for (int j = 0; j < NUM_STUDENTS; j++) {
        studentAnswers[j] = new char[NUM_QUESTIONS];
        int score = 0;
        for (int k = 0; k < NUM_QUESTIONS; k++) {
            if (studentData[j*2+1][k] == ' ') {
                studentAnswers[j][k] = ' ';
            } else {
                studentAnswers[j][k] = studentData[j*2+1][k];
                if (studentAnswers[j][k] == answers[k]) {
                    score += 2;
                } else if (studentAnswers[j][k] != answers[k] && studentAnswers[j][k] != ' ') {
                    score -= 1;
                }
            }
        }
        scores[j] = score;
    }

    // Output results
    cout << "Processing Data\n";
    cout << "Key: " << answers << endl;
    for (int l = 0; l < NUM_STUDENTS; l++) {
        cout << studentData[l*2] << " ";
        for (int m = 0; m < NUM_QUESTIONS; m++) {
            cout << studentAnswers[l][m];
        }
        cout << "  " << scores[l] << "   ";
        if (scores[l] >= 90) {
            cout << "A" << endl;
        } else if (scores[l] >= 80) {
            cout << "B" << endl;
        } else if (scores[l] >= 70) {
            cout << "C" << endl;
        } else if (scores[l] >= 60) {
            cout << "D" << endl;
        } else {
            cout << "F" << endl;
        }
        delete[] studentAnswers[l];
    }

    return 0;
}

