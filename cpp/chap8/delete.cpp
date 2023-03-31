#include <iostream>

using namespace std;

int main()
{
    double list[50];
    for (int j=0; j<=49; j++) {
        list[j] = 0.0;
    }

    for (int i=0; i<50; i++) {
        cout << list[i] << endl;
    }
    return 0;
}
