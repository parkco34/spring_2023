#include "couresType.h"
#include <iomanip>

void courseType::setCourseInfo(string, cName, string cNo, int credits)
{
    courseName = cName;
    courseNo = cNo;
    courseCredits = credits;
}

void courseType::print(ostream& outF)
{
    outF << left;
    outF << setw(8) << courseNo << "   ";
    outF << setw(15) << courseName;
    outF << right;
    outF << setw(3) << courseCredits << "   ";
}

// Constructor
courseType::courseType(string cName, string cNo, int credits)
{
    courseName = cName;
    courseNo = cNo;
    courseCredits = credits;
}

int courseType::getCredits() const
{
    return courseCredits;
}

string courseType::getCourseNumber() const
{
    return courseNo; 
}

int courseType::getCourseName() const
{
    return courseName;
}
