//Cory Parker
//Alarm clock partner project
#include "clock.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>

using namespace std;

void sleep(int seconds) {
    clock_t start_time = clock();
    while (clock() < start_time + seconds * CLOCKS_PER_SEC);
}

int main() {
    Clock currentTime, alarmTime;

    cout << "Enter the current time (format: HH:MM:SS): ";
    cin >> currentTime;
    cout << "Enter the alarm time (format: HH:MM:SS): ";
    cin >> alarmTime;

    while (currentTime != alarmTime) {
        system("cls");
        cout << "Current time: " << currentTime << endl;
        sleep(1);
        ++currentTime;
    }

    cout << "Alarm time reached: " << alarmTime << endl;
    return 0;
}

