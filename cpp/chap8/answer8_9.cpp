#include<iostream>

using namespace std;

const int HIGH = 0;
const int LOW = 1;
const int ROWS = 2;
const int COLUMNS = 12;

void getData(int temp[][COLUMNS]);
int averageHigh(int temp[][COLUMNS]);
int averageLow(int temp[][COLUMNS]);
int indexHighTemp(int temp[][COLUMNS]);
int indexLowTemp(int temp[][COLUMNS]);

int main() {
    int temp[ROWS][COLUMNS];

    getData(temp);

    for (int i = 0; i < COLUMNS; i++){
        cout << temp[HIGH][i];
        cout << temp[LOW][i];
    }

    cout << "\nAverage high temperature: " << averageHigh(temp);
    cout << "\nAverage low temperature: " << averageLow(temp);
    cout << "\nHighest temperature: " << indexHighTemp(temp);
    cout << "\nLowest temperature: " << indexLowTemp(temp);

    return 0;
}

void getData(int temp[][COLUMNS]){
    for (int i = 0; i < COLUMNS; i++){
        cin >> temp[HIGH][i];
    }

    for (int j = 0; j< COLUMNS; j++) {
        cin >> temp[LOW][j];
    }
}

int averageHigh(int temp[][COLUMNS]){
    int avgHigh = temp[HIGH][0];

    for (int i = 1; i < COLUMNS; i++){
        avgHigh += temp[HIGH][i];
    }

    return avgHigh / COLUMNS;
}

int averageLow(int temp[][COLUMNS]){
    int avgLow = temp[LOW][0];

    for (int i = 1; i < COLUMNS; i++){
        avgLow += temp[LOW][i];
    }

    return avgLow / COLUMNS;
}

int indexHighTemp(int temp[][COLUMNS]){
    int inHigh = temp[HIGH][0];

    for (int i = 1; i < COLUMNS; i++){
        if (inHigh < temp[HIGH][i]){
            inHigh = temp[HIGH][i];
        }
    }

    return inHigh;
}

int indexLowTemp(int temp[][COLUMNS]){
    int inLow = temp[LOW][0];

    for (int i = 1; i < COLUMNS; i++){
        if (inLow > temp[LOW][i]){
            inLow = temp[LOW][i];
        }
    }

    return inLow;
}

