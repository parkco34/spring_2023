#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int lesson;
    cout << "Options include: \n1 = Tricky boolean stuff\n2 = Input failures\n3 = blah" << endl;
    cout << "Enter an integer representing the lesson you wish learn about: ";
    cin >> lesson;

    switch (lesson)
    {
        case 1:
            {
                bool bool1 = !(!36);
                bool bool2 = !(!true);

                cout << "!(!36) = " << !(!36) << endl;
                cout << "!(!true) = " << !(!true) << endl;
                cout << "bool1 = !(!36) = " << bool1 << endl;
                cout << "bool2 = !(!true) = " << bool2 << endl;

                break;

            }

        case 2:
            {
                ifstream inFile;
                ofstream outFile;
               
                // Open input/output files
                inFile.open("example.txt");
                outFile.open("example_out.txt");
            
                double gpa, grade;
                int study_hours;
                
                if (!inFile)
                {
                    cout << "File either doesn't exist or you're just a twat waffle ╭∩╮( ͡° ل͟ ͡° )╭∩╮ " << endl;
                    return 1;
                }
                
                else {
                    inFile >> gpa >> study_hours;
                    grade = gpa / study_hours;
                    outFile << "For a GPA of: " << gpa << " and study hours of: " << study_hours << endl;

                    outFile << "Grade: " << grade << endl;
                    cout << "Grade: " << grade << endl;
                }

                break;
            }

        default:
            cout << "┻━┻ ︵ヽ(`д´)ﾉ︵ ┻━┻";
    }

    return 0;
}
