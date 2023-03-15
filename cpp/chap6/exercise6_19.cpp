#include <iostream>

using namespace std;


int calculateGrade(int cScore)
{
    if (cScore >= 90) {
        return 4; // A grade
    } else if (cScore >= 80) {
        return 3; // B grade
    } else if (cScore >= 70) {
        return 2; // C grade
    } else if (cScore >= 60) {
        return 1; // D grade
    } else {
        return 0; // F grade
    }
}

int main() {
  int courseScore;
  cout << "Enter a grade: " << endl;
  cin >> courseScore;
  int courseGrade = calculateGrade(courseScore);
  cout << "The grade is: ";
  switch (courseGrade) {
    case 4:
        cout << "A" << endl;
        break;
    case 3:
        cout << "B" << endl;
        break;
    case 2:
        cout << "C" << endl;
        break;
    case 1:
        cout << "D" << endl;
        break;
    default:
        cout << "F" << endl;
        break;
  }
    return 0;
}

