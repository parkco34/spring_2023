#include <iostream>

using namespace std;

int main()
{
    int myList[5] = {0, 2, 3, 5, 8};
    int yourMothers[5];

    for (int i=0; i < 5; i++) {
        yourMothers[i] = myList[i];
        cout << yourMothers[i] << endl;
    }

    enum paintType {GREEN, RED, BLUE, BROWN, WHITE, ORANGE,
        YELLOW, REDRUM};
    double paintSale[7];
    paintType paint;

    for (paint=GREEN; paint<=YELLOW; 
            paint=static_cast<paintType>(paint+1)) {
        paintSale[paint] = 0.0;
    }

    paintSale[RED] = paintSale[RED] +  73.13;
    cout << "Paint sale: " << paintSale << endl;

    return 0;
}
