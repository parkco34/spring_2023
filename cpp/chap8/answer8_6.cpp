#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    ifstream infile("Ch8_Ex6Data.txt");
    if (!infile) {
        cout << "unable to open file so exiting from program :";
        return 0;
    }
    
    char answers[21];
    string str;
    getline(infile, str);
    for (int i = 0; i < str.length(); i++)
        answers[i] = str[i];
    
    while (getline(infile, str)) {
        int i;
        for (i = 0; i < str.length(); i++) {
            if (str[i] == ' ') break;
            else cout << str[i];
        }
        cout << " ";
        int k = 0;
        double score = 0;
        for (int j = i + 1; j < str.length(); j++, k++) {
            cout << str[j];
            if (str[j] == ' ')
                continue;
            else if (str[j] == answers[k])
                score += 2;
            else if (str[j] != answers[k])
                score -= 1;
        }
        cout << " ";
        int points = (int)score; // convert score to integer points
        cout << points << " ";
        double percent = (score / 40.0) * 100.0;
        //cout << percent << " ";
        
        if (percent >= 90)
            cout << "A" << endl;
        else if (percent >= 80)
            cout << "B" << endl;
        else if (percent >= 70)
            cout << "C" << endl;
        else if (percent >= 60)
            cout << "D" << endl;
        else
            cout << "F" << endl;
    }
    
    return 0;
}



