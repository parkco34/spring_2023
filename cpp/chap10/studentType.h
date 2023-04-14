#include <iostream>
#include <string>

using namespace std;

class studentType {

    private:
        string firstName;
        string lastName;
        char courseGrade;
        int testScore;
        int programmingScore;
        double GPA;

    public:
        void setFirstName(string first) {
            firstName = first;
        }

        void setLastName(string last) {
            lastName = last;
        }

        void setCourseGrade(char grade) {
            courseGrade = grade;
        }

        void setTestScore(int score) {
            testScore = score;
        }

        void setProgrammingScore(int score) {
            programmingScore = score;
        }

        void setGPA(double gpa) {
            GPA = gpa;
        }

        string getFirstName() const {
            return firstName;
        }

        string getLastName() const {
            return lastName;
        }

        char getCourseGrade() const {
            return courseGrade;
        }

        int getTestScore() const {
            return testScore;
        }

        int getProgrammingScore() const {
            return programmingScore;
        }

        double getGPA() const {
            return GPA;
        }
};// Write your code here

