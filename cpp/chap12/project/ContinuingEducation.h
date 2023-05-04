#include "Course.h"
#Include <string>
using namespace std;

class ContinuingEducation: public Course
{
    private:
        double flatfee;

    public:
        // Constructors
        ContinuingEducation();
        ContinuingEducation(const double flatfee);
        
        void show();
};
