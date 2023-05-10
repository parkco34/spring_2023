#ifndef CLOCK_H
#define CLOCK_H

#include <iostream>

class Clock {
public:
    Clock();
    Clock(int hr, int min, int sec);
    Clock(int hr, int min);
    Clock(int hr);
    Clock(const Clock& other);

    // Overloaded operators
    friend std::ostream& operator<<(std::ostream& os, const Clock& clk);
    friend std::istream& operator>>(std::istream& is, Clock& clk);
    Clock& operator++();
    bool operator<(const Clock& other) const;
    bool operator<=(const Clock& other) const;
    bool operator>(const Clock& other) const;
    bool operator>=(const Clock& other) const;
    bool operator==(const Clock& other) const;
    bool operator!=(const Clock& other) const;

    // Getters and setters
    int getHour() const;
    int getMinute() const;
    int getSecond() const;
    void setHour(int hr);
    void setMinute(int min);
    void setSecond(int sec);

    // Increment methods
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();

private:
    int hour, minute, second;
    void normalize();
};

#endif

