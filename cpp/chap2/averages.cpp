// Grade Components
// Midterm 25%
// Final Exam 25%
// Research Paper 20%
// Group Project 20%
// Participation 10%
// Write a program to input each of Fred’s scores for each of the five grade components. Calculate his class
// grade based on the percentages assigned to each item
#include <iostream>

using namespace std;

int main()
{
    const double MID = .25;
    const double FINAL = .25;
    const double PAPER = .20;
    const double PROJECT = .20;
    const double PARTICIPATION = .1;
    
    double mid, fin, paper, proj, participation;
    cout << "Enter grades for the follow metrics: " << endl;
    cout << "\nMidterm: \n";
    cin >> mid;
    cout << "Final: \n";
    cin >> fin;
    cout << "Research Paper\n";
    cin >> paper;
    cout << "Project: \n";
    cin >> proj;
    cout << "Participation: \n";
    cin >> participation;

    cout << "\nYour grade is " << (MID * mid + FINAL * fin + PAPER * paper + PROJECT * proj +
        PARTICIPATION * participation) << endl;
    return 0;
}
