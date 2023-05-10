#include <iostream>
#include "boxType.h"

using namespace std;

int main()
{
    boxType box1(2, 3, 4);
    boxType box2(3, 4, 5);
    boxType box3;

    cout << "Box 1 dimensions: " << box1 << endl;
    cout << "Box 2 dimensions: " << box2 << endl;

    box3 = box1 + box2;

    cout << "Box 3 dimensions after adding Box 1 and Box 2: " << box3 << endl;

    return 0;
}


