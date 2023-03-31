#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const int NUM_STUDENTS = 10;
const int NUM_TESTS = 5;

// Function prototypes
void readData(string filename, string names[], double scores[][NUM_TESTS], char grades[]);
void calculateGrade(double scores[][NUM_TESTS], char grades[]);
void printData(string names[], double scores[][NUM_TESTS], char grades[]);

int main()
{
    string filename = "ch8_Ex13Data.txt";
    string names[NUM_STUDENTS];
    double scores[NUM_STUDENTS][NUM_TESTS];
    char grades[NUM_STUDENTS];

    // Read data from file
    readData(filename, names, scores, grades);

    // Calculate grades
    calculateGrade(scores, grades);

    // Print data
    printData(names, scores, grades);

    return 0;
}

void readData(string filename, string names[], double scores[][NUM_TESTS], char grades[])
{
    ifstream inputFile;
    inputFile.open(filename);

    if (!inputFile)
    {
        cout << "Error opening file." << endl;
        exit(1);
    }

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        inputFile >> names[i];
        double totalScore = 0;

        for (int j = 0; j < NUM_TESTS; j++)
        {
            inputFile >> scores[i][j];
            totalScore += scores[i][j];
        }

        double avgScore = totalScore / NUM_TESTS;

        if (avgScore >= 90)
            grades[i] = 'A';
        else if (avgScore >= 80)
            grades[i] = 'B';
        else if (avgScore >= 70)
            grades[i] = 'C';
        else if (avgScore >= 60)
            grades[i] = 'D';
        else
            grades[i] = 'F';
    }

    inputFile.close();
}

void calculateGrade(double scores[][NUM_TESTS], char grades[])
{
    // This function is empty because grades were already calculated in readData
}

void printData(string names[], double scores[][NUM_TESTS], char grades[])
{
    double classTotal = 0;

    cout << fixed << setprecision(2);
    cout << setw(10) << "Name" << setw(20) << "Test Scores" << setw(10) << "Average" << setw(10) << "Grade" << endl;

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        cout << setw(10) << names[i] << " ";

        for (int j = 0; j < NUM_TESTS; j++)
        {
            cout << setw(5) << scores[i][j] << " ";
        }

        double totalScore = 0;

        for (int j = 0; j < NUM_TESTS; j++)
        {
            totalScore += scores[i][j];
        }

        double avgScore = totalScore / NUM_TESTS;
        classTotal += avgScore;

        cout << setw(10) << avgScore << " ";
        cout << setw(5) << grades[i] << endl;
    }

    cout << "Class average: " << classTotal / NUM_STUDENTS << endl;
}

