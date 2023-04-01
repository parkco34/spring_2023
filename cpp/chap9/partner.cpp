
// Cory Parker
// Partner: Jacob Barron
#include <iostream>
#include <string>
using namespace std;
// Part 1
struct petNames {
    string dog;
    string cat;
    string pig;
    string rock;
    string hamster;
};
// Part 2
struct inventory_time {
    string thing1, thing2, thing3, thing4, thing5;
};

int main()
{
    // Part 2
    inventory_time inventory = {"planet", "pencil", "book", "brain", "peppers"};
    cout << inventory.thing1 << endl;
    cout << inventory.thing2 << endl;
    cout << inventory.thing3 << endl;
    cout << inventory.thing4 << endl;
    cout << inventory.thing5 << endl;
    return 0;
}

struct pointType{
double x;
double y;
};

double calcDistance(pointType one, pointType two);
int main() {
    ifstream inFile;
    inFile.open("entries.txt");
    pointType list[2];
    inFile>>list[0].x;
    while(inFile){
        inFile>>list[0].y;
        inFile>>list[1].x;
    }
}
