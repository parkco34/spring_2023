/*
 * The history teacher at your school needs help in grading a True/False test. The students’ IDs and test answers are stored in a file. The first entry in the file contains answers ...
 * POINT SYSTEM:
 * T = 2
 * F = -1
 * NULL = 0
 * ----
 * The exam has 20 questions, and the class has more than 150 students. 
 * Each correct answer is awarded two points, 
 * each wrong answer gets one point deducted, 
 * and no answer gets zero points. 
 * ----
 * Write a program that processes the test data. The output should be the student’s ID, followed by the answers, followed by the test score, followed by the test grade:
 *  -> Student's IDs
 *  -> Answers
 *  -> Test Scores
 *  -> Test Grade
 *
 * Remember, a space indicates that a question has been skipped. If spaces are added for formating, there are too many or too few, it may affect the accuracy of your program.
 --------------------------------------
Example: 
    ABC54102 T FTFTFTTTFTTFTTF TF
    score = 2+0-1+1-1+1-1+1+1+1-1+1+1-1+1+1-1+0+1-1
         = 15
    percentage = score / QUESTIONS

    OUTPUT:
    Key TTFTFTTTFTFTFFTTFTTF
    ABC54102 T FTFTFTTTFTTFTTF TF 27 D
    DEF56278 TTFTFTTTFTFTFFTTFTTF 40 A
    ABC42366 TTFTFTTTFTFTFFTTF 34 B
    ABC42586 TTTTFTTT TFTFFFTF 26 D
 --------------------------------------
 * */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char getLetterGrade(int score, double total)
{
    double percentage = (score / total) * 100;
    if (percentage >= 90) 
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else
        return 'F';
}

// For the sake of OVERLOADING
// Compares the elements of two arrays
int compare_and_output_equal_elements(const char* array1, const string& str, size_t size) {
    /* const int* = a pointer to a constant int array, allowing the function to accept an array of character as input
     * size_t size = Common size to both arrays, represented as an unsigned integer,
     *  from index 0 to index size - 1
     *  Const. forbids the function from making modiifications
    */
    int score = 0;
    for (size_t i = 0; i < size; ++i) {
        if (array1[i] == str[i]) {
            score += 2;
        }
        else if (str[i] == ' ') {
            // Do nothing
        }
        else {
            score -= 1;
        }
    }
    return score;
}


int main()
{
    // Initialize variablesa
    // --------------------------------------------
    const char ID_LETTERS = 8; // Number of letters in each student id
    const int QUESTIONS = 20; // Number of questions
    const int NUM_OF_STUDENTS = 4; // Number of student ids
    string student_ids[NUM_OF_STUDENTS];
    // Store answers to the 20 questions
    char answers[21];
    // Get size of answers array
    size_t size = sizeof(answers) / sizeof(answers[0]);
    int scores[NUM_OF_STUDENTS];
    char letterGrades[NUM_OF_STUDENTS]; // Array of correpsonding student's letter grade
    string attempts[QUESTIONS]; // Array of each student's attempts
    string str;
    int counter = 0; // For keeping track of which student we store scores for

    // Read text file
    ifstream infile("Ch12_Ex2Data.txt");
    // check file opened properly 
    if (!infile) {
        cout << "File did not open properly" << endl;
        return 1;
    }

    // Putting answer key into answers array
    getline(infile, str);
    for (int i=0; i < str.length(); i++)
        answers[i] = str[i];
    
    // Entering corresponding data into appropriate arrays
    //Gets student's scores
    while(getline(infile, str) && counter < NUM_OF_STUDENTS) {
        // Get Student ids
        int index = str.find(' ');
        student_ids[counter] = str.substr(0, index);

        // Get student's attempts
        string student_attempt = str.substr(index+1, string::npos);
        attempts[counter] = student_attempt;

        // Calculate student's scores using the modified compare_and_output_equal_elements function
        scores[counter] = compare_and_output_equal_elements(answers, student_attempt, size);

        // Get student's letter grade
        letterGrades[counter] = getLetterGrade(scores[counter], QUESTIONS);

        // Next!
        counter++;
    }

    // Output every element in the array
    cout << "Key ";
    for (int i=0; i<QUESTIONS; i++) {
        cout << answers[i];
    }
    cout << endl;

    // Check which Student's attempts are correct
    // works by dividing the total size of the array in bytes by the size of a single element in bytes
    // ...

    for (int i = 0; i < NUM_OF_STUDENTS; i++) {
        cout << student_ids[i];
        cout << " " << attempts[i];
        cout << " " << scores[i];
        cout << " " << letterGrades[i] << endl;
    }

    return 0;
}
