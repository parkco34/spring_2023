// Write a program that prompts the user to enter five test scores and then prints the average test score. 
// Indicate the average test score by printing it to the terminal using the following format

#include <iostream>

using namespace std;

int main()
{
    float test1;
    float test2;
    float test3;
    float test4;
    float test5;

    cout << "Enter test score: " << endl;
    cin >> test1;
    cout << "Enter test score: " << endl;
    cin >> test2;
    cout << "Enter test score: " << endl;
    cin >> test3;
    cout << "Enter test score: " << endl;
    cin >> test4;
    cout << "Enter test score: " << endl;
    cin >> test5;

    cout << "Your average test score is: " << (test1 + test2 + test3 + test4 + test5) / 5 << endl;

    return 0;
}

