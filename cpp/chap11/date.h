#ifndef DATETYPE_H
#define DATETYPE_H

class dateType {
public:
    dateType(int month = 1, int day = 1, int year = 1900);
    void setDate(int month, int day, int year);
    void printDate() const;
    bool isLeapYear() const;
    int getDay() const;
    int getMonth() const;
    int getYear() const;
private:
    int dMonth;
    int dDay;
    int dYear;
    bool isValidDate(int month, int day, int year) const;
};

#endif

