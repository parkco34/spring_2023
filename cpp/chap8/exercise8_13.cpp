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

void readData(string names[], int scores[][TESTS], int& studentNum) 
{
    ifstream infile("ch8_Ex13Data.txt");

    studentNum = 0;
    string line;
    // Fill array with names, and another with test scores
    while(getline(infile, line)) {
        string name;
        int score;
        int startIndex = 0;
        int testIndex = 0;
        int endIndex = line.find(' ');
        name = line.substr(startIndex, endIndex-startIndex);
        startIndex = endIndex+1;

        while(endIndex != string::npos && testIndex < TESTS) {
            endIndex = line.find(' ', startIndex);

            if (endIndex == string::npos) {
                endIndex = line.length();
            }

            score = stoi(line.substr(startIndex, endIndex-startIndex));
            cout << "Score:" << score << endl;
            scores[studentNum][testIndex] = score;
            ++testIndex;
            startIndex = endIndex+1;
        }
        names[studentNum] = name;
        cout << "Name: " << name << endl;
        ++studentNum;
    }
}

double getAverage(int scores[], int numTests)
{
    int totalScore = 0;
    for (int i=0; i < numTests; ++i) {
        totalScore += scores[i];
        cout << "TOtal score: " << totalScore << endl;
    }
    return totalScore / numTests;
}

char getGrade(double avg)
{
    if (avg >= 90) {
        return 'A';
    }
    else if(avg >= 80) {
        return 'B';
    }
    else if(avg >= 70) {
        return 'C';
    }
    else if(avg >= 60) {
        return 'D';
    }
    else {
        return 'F';
    }
}

void outputz(string names[], int scores[][TESTS], int studentNum)
{
    cout << fixed << setprecision(2);
    double classTotal = 0.0;
    int numTests = TESTS;
    
    for (int i=0; i < studentNum; ++i) {
        double average = getAverage(scores[i], numTests);
        char grade = getGrade(average);
        cout << names[i] << " Average: " << average << " Grade: " << grade << endl;
        classTotal += average;
    }
    double classAvg = classTotal / studentNum;
    cout << "======================================= " << endl;
    cout << "Class Average: " << classAvg << endl;
}

int main()
{
    string names[KIDS];
    int scores[KIDS][TESTS];
    int studentNum;

    readData(names, scores, studentNum);
    outputz(names, scores, studentNum);

    return 0;
}
