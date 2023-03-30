//exercise 8 #6L
//The history teacher at your school needs help in grading a True/False test. The students’ IDs and test answers are stored in a file. The first entry in the file contains answers to the test in the form:
//Program code. In the code, the words in the variable names are merged. Line 1: T F F T F F T T T T F F T F T F T F T T.
//
//Every other entry in the file is the student ID, followed by a blank, followed by the student’s responses. For example, the entry:
//Program code. In the code, the words in the variable names are merged. Line 1: Ay B C 54301 T F T F T F T T T F T F T F F T T F T.
//
//indicates that the student ID is ABC54301 and the answer to question 1 is True, the answer to question 2 is False, and so on. This student did not answer question 9. The exam has 20 questions, and the class has more than 150 students. Each correct answer is awarded two points, each wrong answer gets one point deducted, and no answer gets zero points. Write a program that processes the test data. The output should be the student’s ID, followed by the answers, followed by the test score, followed by the test grade. Assume the following grade scale: 90%–100%, A; 80%–89.99%, B; 70%–79.99%, C; 60%–69.99%, D; and 0%–59.99%, F
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Open the file
    ifstream file("Ch8_Ex6Data.txt");

    if (!file)
    {
        cerr << "Error opening file." << endl;
        return 1;
    }

    // Get the answer key
    string answerKey;
    getline(file, answerKey);

    // Get the student data
    string line;

    while (getline(file, line))
    {
        // Get the student ID
        string studentID = line.substr(0, 8);

        // Get the student's answers
        string studentAnswers = line.substr(9);

        // Calculate the student's score
        int score = 0;

        for (size_t i = 0; i < answerKey.size(); i++)
        {
            if (answerKey[i] == studentAnswers[i])
            {
                score += 2;
            }
            else if (studentAnswers[i] != ' ')
            {
                score--;
            }
        }

        // Calculate the student's grade
        char grade;

        if (score >= 90)
        {
            grade = 'A';
        }
        else if (score >= 80)
        {
            grade = 'B';
        }
        else if (score >= 70)
        {
            grade = 'C';
        }
        else if (score >= 60)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }

        // Print the student's information
        cout << studentID << " " << studentAnswers << " " << score << " " << grade << endl;
    }

    // Close the file
    file.close();

    return 0;
}

// ===============================================================
//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//const int NUM_QUESTIONS = 20;
//
//int main() {
//    // Open the file
//    ifstream infile("Ch8_Ex6Data.txt");
//    if (!infile) {
//        cerr << "Error: Could not open file\n";
//        return 1;
//    }
//
//    // Read in the answer key
//    string answer_key;
//    getline(infile, answer_key);
//    int num_correct[NUM_QUESTIONS] = {0};
//
//    // Process each student's answers
//    string line;
//    while (getline(infile, line)) {
//        // Extract the student ID
//        string student_id = line.substr(0, line.find(" "));
//        line = line.substr(line.find(" ") + 1);
//
//        // Compute the score
//        int score = 0;
//        for (int i = 0; i < NUM_QUESTIONS; i++) {
//            char answer = line[i];
//            if (answer == answer_key[i]) {
//                score += 2;
//                num_correct[i]++;
//            } else if (answer != ' ') {
//                score--;
//            }
//        }
//
//        // Output the results
//        cout << student_id << " " << line << " " << score << " ";
//        double percentage = static_cast<double>(score) / (NUM_QUESTIONS * 2) * 100.0;
//        if (percentage >= 90.0) {
//            cout << "A\n";
//        } else if (percentage >= 80.0) {
//            cout << "B\n";
//        } else if (percentage >= 70.0) {
//            cout << "C\n";
//        } else if (percentage >= 60.0) {
//            cout << "D\n";
//        } else {
//            cout << "F\n";
//        }
//    }
//
//    // Output the answer key and number of correct answers for each question
//    cout << "Answer key: " << answer_key << "\n";
//    for (int i = 0; i < NUM_QUESTIONS; i++) {
//        cout << "Question " << i+1 << ": " << num_correct[i] << " correct\n";
//    }
//
//    // Close the file and exit
//    infile.close();
//    return 0;
//}
//
