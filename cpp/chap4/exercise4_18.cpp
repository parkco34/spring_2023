// Body fat formula for men:
//    A1 = (body weight X 1.082) + 94.42
//    A2 = waist measurement X 4.15
//    B = A1 - A2
//    Body fat = body weight - B
//    Body fat percentage = body fat X 100 / body weight
//  =====================================================
//Body fat formula for women:
//    A1 = (body weight X 0.732) + 8.987
//    A2 = wrist measurement (at fullest point) / 3.140
//    A3 = waist measurement (at navel) X 0.157
//    A4 = hip measurement (at fullest point) X 0.249
//    A5 = forearm measurement (at fullest point) X 0.434
//    B = A1 + A2 - A3 - A4 + A5
//    Body fat = body weight - B
//    Body fat percentage = body fat X 100 / body weight
//  =====================================================
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char gender;
    double bodyFatPercentage, bodyWeight, B, wrist, 
           waist, hip, forearm, bodyFat,
           A1, A2, A3, A4, A5;  // LBS and inches

    cout << "Please enter your gender: (M for male, F for female)" << endl;
    cin >> gender;

    // Male input
    if (gender == 'M' || gender == 'm') {
        cout << "Please enter your body weight: (in LBS)" << endl;
        cin >> bodyWeight;
        cout << "Now enter your waist size: (in inches)" << endl;
        cin >> waist;
        
        A1 = (bodyWeight * 1.082) + 94.42;
        A2 = waist * 4.15;
        B = A1 - A2;
        bodyFat = bodyWeight - B;
        bodyFatPercentage = bodyFat * 100 / bodyWeight;
        cout << "Your body fat is: " << bodyFat << "\nBody fat percentage: " << bodyFatPercentage << endl;
    }
    else if (gender == 'F' || gender == 'f') {
        cout << "Please enter your body weight: (in LBS)" << endl;
        cin >> bodyWeight;
        cout << "Enter your wrist measurement: (in inches)" << endl;
        cin >> wrist;
        cout << "Enter your waist measurement: (in inches)" << endl;
        cin >> waist;
        cout << "Enter your hip measurement: (at navel, in inches)" << endl;
        cin >> hip;
        cout << "Last, but not least, enter your forearm measurement: (in inches)" << endl;
        cin >> forearm;

        A1 = (bodyWeight * 0.732) + 8.987;
        A2 = wrist / 3.140;
        A3 = waist * 0.157;
        A4 = hip * 0.249;
        A5 = forearm * 0.434;
        B = A1 + A2 - A3 - A4 + A5;
        bodyFat = bodyWeight - B;
        bodyFatPercentage = bodyFat * 100 / bodyWeight;

        cout << "Your body fat content is: " << bodyFat << "\nBody fat percentage is: " << bodyFatPercentage << endl;
    }

    return 0;

}
