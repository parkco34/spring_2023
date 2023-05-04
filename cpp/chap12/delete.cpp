#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct Student {
    string id;
    string answers;
    int score;
    char grade;
};

int getScore(const string& answers, const string& studentAnswers) {
    int score = 0;
    for (size_t i = 0; i < studentAnswers.length(); ++i) {
        if (studentAnswers[i] == answers[i]) {
            score += 2;
        } else if (studentAnswers[i] == ' ') {
            // Do nothing
        } else {
            score -= 1;
        }
    }
    return score;
}

char getLetterGrade(int score, int totalQuestions) {
    double percentage = (static_cast<double>(score) / (totalQuestions * 2)) * 100;
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

int main() {
    ifstream infile("Ch12_Ex2Data.txt");

    if (!infile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    string answers;
    getline(infile, answers);

    const int numOfStudents = 4;
    Student* students = new Student[numOfStudents];

    int index = 0;
    string line;
    while (getline(infile, line) && index < numOfStudents) {
        size_t spacePos = line.find(' ');
        students[index].id = line.substr(0, spacePos);
        students[index].answers = line.substr(spacePos + 1);

        students[index].score = getScore(answers, students[index].answers);
        students[index].grade = getLetterGrade(students[index].score, answers.length());

        ++index;
    }

    infile.close();

    cout << "Processing Data" << endl;
    cout << "Key: " << answers << endl;

    for (int i = 0; i < numOfStudents; ++i) {
        cout << students[i].id << " " << students[i].answers << "  " << students[i].score << "  " << students[i].grade << endl;
    }

    delete[] students;

    return 0;
}

