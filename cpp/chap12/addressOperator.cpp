#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Dynamic 2-D Arrays
void fill(int **p, int rowSize, int columnSize);
void print(int **p, int rowSize, int columnSize);

class classExample
{
    int x;

    public:
        void setX(int a);
        void print() const;
};

void classExample::setX(int a)
{
    x = a;
}

void classExample::print() const
{
    cout << "x = " << x << endl;
}


struct studentType
{
    char name[26];
    double gpa;
    int sID;
    char grade;
};

int main()
{
    cout << "In C++, the ampersand, &, called the address of operator " << 
        " is a unary operator that returns the address of its operand" << endl;

    cout << "=========================================================" << endl;
    int x;
    int *p;
    p = &x;
    cout << "int x;\nint *p\np = &x = " << p << endl;
    cout << "=========================================================" << endl;

    cout << "Address of var1 is: " << endl;
    int var1;
    cout << &var1 << endl;
    char var2[10];
    cout << "Address of var2 is: " << endl;
    cout << &var2 << endl;

    cout << "=========================================================" << endl;
    classExample *cExPtr;
    classExample cExObject;

    cExPtr = &cExObject;
    
    cExPtr -> setX(5);
    cExPtr -> print();
    cout << "That did the same as this: " << endl;
    (*cExPtr).setX(5);
    (*cExPtr).print();
    cout << "For: (*cExPtr).setX(5) = (*cExPtr).print()" << endl;
    cout << "=========================================================" << endl;
    int *q;
    char *name;
    string *str;

    p = new int;
    cout << "q = new int: " << q << endl;
    *p = 28;
    cout << "q = " << q << endl;
    name = new char[5];
    strcpy(name, "John");
    str = new string;
    *str = "Sunnny Day";
    cout << "=========================================================" << endl;
    int *list;
    list = new int[5];
    for (int i=0; i<5;i++) {
        list[i] = i * i;
    }

    // generates error
//    for (int x: list) {
//        cout << x << " ";
//    }
    cout << "=========================================================" << endl;
    cout << "Dynamic two-dimensional Arrays" << endl;
    int **board, rows, columns;

    cout << "Line 11: Enter number of rows: " << endl;
    cin >> rows >> columns;
    // Create rows of board
    board = new int* [rows];
    // Create columns of board
    for (int row=0; row<rows; row++) 
        board[row] = new int[columns];
    
    // Insert elements into board
    fill(board, rows, columns);
    cout << "Line 18: Board: " << endl;
    // Output elements of board
    print(board, rows, columns);

    cout << "=========================================================" << endl;


    return 0;
}
