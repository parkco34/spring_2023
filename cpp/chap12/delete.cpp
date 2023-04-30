#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char calculate_grade(int score) {
    float percentage = (float)score / 40.0 * 100;
    if (percentage >= 90) return 'A';
    if (percentage >= 80) return 'B';
    if (percentage >= 70) return 'C';
    if (percentage >= 60) return 'D';
    return 'F';
}

int main() {
    ifstream input_file("test_data.txt");
    if (!input_file.is_open()) {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }

    string correct_answers;
    getline(input_file, correct_answers);

    cout << "Key " << correct_answers << endl;

    string student_entry;
    while (getline(input_file, student_entry)) {
        string student_id = student_entry.substr(0, 7);
        string student_answers = student_entry.substr(8);
        int score = 0;

        for (size_t i = 0, j = 0; i < 20 && j < student_answers.size(); ++i, ++j) {
            while (j < student_answers.size() && student_answers[j] == ' ') {
                ++j;
            }

            if (j < student_answers.size()) {
                if (student_answers[j] == correct_answers[i]) {
                    score += 2;
                } else {
                    score -= 1;
                }
            }
        }

        char grade = calculate_grade(score);
        cout << student_id << " ";

        for (size_t i = 0; i < student_answers.size(); ++i) {
            cout << student_answers[i];
        }

        cout << " " << score << " " << grade << endl;
    }

    input_file.close();
    return 0;
}

