#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    const int MAX_LINES = 5;
    const int ANSWER = 20;
    const int KIDS = MAX_LINES - 1;
    string ids[MAX_LINES];
    string correct;
    char scores[KIDS][ANSWER];
    string line;
    int counter = 0;

    // Open file to read
    ifstream infile("Ch8_Ex6Data.txt");
    if (!infile) {
        cerr << "Oops! Failed to open file." << endl;
        return 1;
    }

    bool firstLine = true;
    while(getline(infile, line)) {
        size_t pos = line.find(' '); // Get space

        // Get first line of correct answers
        if (firstLine) {
            correct = line;
            firstLine = false;
        }

        else {
            // Get ids
            if (pos != string::npos) {
                ids[counter] = line.substr(0, pos);
                counter++;
            }

            // Collect scores while skipping spaces
            int i = 0, j = 0;
            while (i < ANSWER && j < KIDS) {
                if (line[pos+i+1] != ' ') {
                    scores[j][i] = line[pos+i+1];
                    i++;
                }
                else {
                    j++;
                    i = 0;
                }
            }
        }
    }
    infile.close();

    // Output results
    cout << "Correct Answers: " << correct << endl;
    for (int i = 0; i < KIDS; i++) {
        cout << "ID: " << ids[i] << "  Scores: ";
        for (int j = 0; j < ANSWER; j++) {
            cout << scores[i][j];
        }
        cout << endl;
    }

    return 0;
}

