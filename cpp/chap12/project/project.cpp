#include <iostream>
#include <string>

using namespace std;

class Course {
public:
    virtual void show() = 0;
    virtual ~Course() = default;

protected:
    string courseId, title;
    int roomNumber, contactHours;
};

class CurriculumCourse : public Course {
public:
    CurriculumCourse(const string& id, const string& title, int room, int hours, int credits, double rate)
        : creditHours(credits), tuitionRate(rate) {
        this->courseId = id;
        this->title = title;
        this->roomNumber = room;
        this->contactHours = hours;
    }

    double calculateTuition() {
        return creditHours * tuitionRate;
    }

    void show() {
        cout << "Curriculum Course: " << courseId << " - " << title << endl;
        cout << "Room: " << roomNumber << ", Contact Hours: " << contactHours << endl;
        cout << "Credit Hours: " << creditHours << ", Tuition Rate: $" << tuitionRate << endl;
        cout << "Tuition: $" << calculateTuition() << endl;
    }

private:
    int creditHours;
    double tuitionRate;
};

class ContinuingEducationCourse : public Course {
public:
    ContinuingEducationCourse(const string& id, const string& title, int room, int hours, double cost)
        : flatFee(cost) {
        this->courseId = id;
        this->title = title;
        this->roomNumber = room;
        this->contactHours = hours;
    }

    void show() {
        cout << "Continuing Education Course: " << courseId << " - " << title << endl;
        cout << "Room: " << roomNumber << ", Contact Hours: " << contactHours << endl;
        cout << "Flat Fee: $" << flatFee << endl;
    }

private:
    double flatFee;
};

int main() {
    Course** courses = new Course*[100];
    int numCourses = 0;
    int choice;

    do {
        cout << "Main Menu\n";
        cout << "1. Add a curriculum class to schedule\n";
        cout << "2. Add a continuing education class to schedule\n";
        cout << "3. Display all records\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string id, title;
            int room, hours, credits;
            double rate;
            cout << "Enter course ID, title, room number, contact hours, credit hours, and tuition rate: ";
            cin >> id >> title >> room >> hours >> credits >> rate;
            courses[numCourses++] = new CurriculumCourse(id, title, room, hours, credits, rate);
        } else if (choice == 2) {
            string id, title;
            int room, hours;
            double cost;
            cout << "Enter course ID, title, room number, contact hours, and flat fee: ";
            cin >> id >> title >> room >> hours >> cost;
            courses[numCourses++] = new ContinuingEducationCourse(id, title, room, hours, cost);
        } else if (choice == 3) {
            for (int i = 0; i < numCourses; i++) {
                courses[i]->show();
                cout << endl;
            }
        }
    } while (choice != 4);

    // Clean up memory
    for (int i = 0; i < numCourses; i++) {
        delete courses[i];
    }
}
