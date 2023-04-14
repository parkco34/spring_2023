//Define the class studentType with the same components as the struct studentType, 
//       and add member functions to manipulate the data members. 
//       (Note that the data members of the class studentType must be private.) 
//    Write a program to illustrate how to use the class studentType.
#include <iostream>
#include "studentType.h"

using namespace std;

int main()
{
    studentType sara;

    sara.setFirstName("Sara");
    sara.setLastName("Spilner");
    sara.setCourseGrade('A');
    sara.setTestScore(89);
    sara.setProgrammingScore(92);
    sara.setGPA(3.57);

    cout << "Name: " << sara.getFirstName() << " " << sara.getLastName() << endl;
    cout << "Grade: " << sara.getCourseGrade() << endl;
    cout << "Test score: " << sara.getTestScore() << endl;
    cout << "Programming score: " << sara.getProgrammingScore() << endl;
    cout << "GPA: " << sara.getGPA() << endl;

    cout << "***************" << endl;

    return 0;
}
