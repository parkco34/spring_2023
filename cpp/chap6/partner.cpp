// Partner Email: sglynn1101@gmail.com
#include <iostream>
#include <fstream>

using namespace std;

// Part A - Function get weighted grade average
double calc_grade(double mid, double _final, double research, double group, double join) 
    // ----------------------------------------
    // INPUTS:
    //      Midterm, final, research, group, join
    //  OUTPUTS:
    //      Returns numeric class grade
    // ----------------------------------------    
{
    // Contants
    double WEIGHT_1 = 0.25;
    double WEIGHT_2 = 0.20;
    double WEIGHT_3 = 0.10;
    double COMPONENTS = 5;

    return ((mid * WEIGHT_1) + (_final * WEIGHT_1) + (research * WEIGHT_2) + (group * WEIGHT_2) + (join * WEIGHT_3)) / COMPONENTS;
}

// Part B - Reading from  file
int get_grades()
{
    int prevId = 0, stuId = 0;
    double midterm, _final, resrch, group, join;

    ifstream inFile("student_rec.txt");
    // Ensure file exists
    if (!inFile) {
        cerr << "Error: could not open input file!" << endl;
        return 1;
    }
    
    // Loop
    while (inFile >> stuId >> midterm >> _final >> resrch >> group >> join) {
        if (stuId != prevId) {
            cout << "Student's numeric grade for student: " << stuId << " is: " << calc_grade(midterm, _final, resrch, group, join) << endl;
        }
        // Set previous ID to current ID
        prevId = stuId;
    }
    return 0;
}

int main()
{
    // Execute programs
    get_grades();
}
