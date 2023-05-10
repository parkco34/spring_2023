#include "clock.h"
#include <iomanip>

Clock::Clock() : hour(0), minute(0), second(0) {}

Clock::Clock(int hr, int min, int sec) : hour(hr), minute(min), second(sec) {
    normalize();
}

Clock::Clock(int hr, int min) : hour(hr), minute(min), second(0) {
    normalize();
}

Clock::Clock(int hr) : hour(hr), minute(0), second(0) {
    normalize();
}

Clock::Clock(const Clock& other) : hour(other.hour), minute(other.minute), second(other.second) {}

std::ostream& operator<<(std::ostream& os, const Clock& clk) {
    os << std::setfill('0') << std::setw(2) << clk.hour << ":"
       << std::setfill('0') << std::setw(2) << clk.minute << ":"
       << std::setfill('0') << std::setw(2) << clk.second;
    return os;
}

std::istream& operator>>(std::istream& is, Clock& clk) {
    char discard;
    is >> clk.hour >> discard >> clk.minute >> discard >> clk.second;
    clk.normalize();
    return is;
}

Clock& Clock::operator++() {
    incrementSeconds();
    return *this;
}

bool Clock::operator<(const Clock& other) const {
    return (hour * 3600 + minute * 60 + second) < (other.hour * 3600 + other.minute * 60 + other.second);
}

bool Clock::operator<=(const Clock& other) const {
    return !(other < *this);
}

bool Clock::operator>(const Clock& other) const {
    return other < *this;
}

bool Clock::operator>=(const Clock& other) const {
    return !(*this < other);
}

bool Clock::operator==(const Clock& other) const {
    return hour == other.hour && minute == other.minute && second == other.second;
}

bool Clock::operator!=(const Clock& other) const {
    return !(*this == other);
}

int Clock::getHour() const {
    return hour;
}

int Clock::getMinute() const {
    return minute;
}

int Clock::getSecond() const {
    return second;
}

void Clock::setHour(int hr) {
    hour = hr;
}
// Helper function to normalize the time
void Clock::normalize() {
    if (second >= 60) {
        minute += second / 60;
        second %= 60;
    }

    if (minute >= 60) {
        hour += minute / 60;
        minute %= 60;
    }

    if (hour >= 24) {
        hour %= 24;
    }
}

void Clock::incrementSeconds() {
    second++;
    normalize();
}

void Clock::incrementMinutes() {
    minute++;
    normalize();
}

void Clock::incrementHours() {
    hour++;
    normalize();
}

void Clock::setMinute(int min) {
    minute = min;
    normalize();
}

void Clock::setSecond(int sec) {
    second = sec;
    normalize();
}
