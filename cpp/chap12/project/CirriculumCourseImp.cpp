#include "Course.h"
#include <string>
using namespace std;

// Constructors
//CirriculumCourse::CirriculumCourse()
//{
//    creditHours = 0;
//    tuitionRate = 0.0;
//}

CirriculumCourse::CirriculumCourse(int roomNumber, int hours, 
        const string& title, const string& id, int credits, double rate)
    : creditHours(credits), tuitionRate(rate)
        {
            this->roomNum = roomNumber;
            this->contactHours = hours;
            this->title = theTitle;
            this->courseID = id;
        }

// Accessor methods
doublr CirriculumCourse::getTuition() const
{
    return tuitionRate * creditHours;
}

// Mutator methods
void CirriculumCourse::setCredits(int& credits)
{
    creditHours = credits; 
}

void CirriculumCourse::setTutionRate(double& rateOfTuition)
{
    tuitionRate = rateOfTuition;
}
