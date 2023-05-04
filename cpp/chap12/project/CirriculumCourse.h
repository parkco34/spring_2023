#include "Course.h"
#include <string>
using namespace std;

class CirriculumCourse: public Course
{
    private:
        int creditHours;
        double tuitionRate;

    public:
        // Accesor methods
        string getTuition() const;

        // Mutator methods
        void setCredits(int& creditHours);
        void setTutionRate(double& tuitionRate);

        // Constructor
//        CirriculumCourse();
        CirriculumCourse(int roomNum, double contactHours, 
                string& title, string& courseID, int creditHours, double tuitionRate);
};
