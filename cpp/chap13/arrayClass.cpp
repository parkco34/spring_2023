#include <iostream>
using namespace std;

class arrayClass
{
    public:
        const arrayClass& operator=(const arrayClass&);

    private:
        int *list;  // Used to create an array to store integers
        int length;
        int maxSize;
};

// without if statement
// const arrayClass& arrayClass::operator=(const arrayClass& otherList)
// {
//     delete [] list;
//     maxSize = otherList.maxSize;
//     length = otherList.length;

//     list = new int[maxSize];

//     for (int i=0; i<length; i++)
//         list[i] = otherList.list[i];

//     return *this;
// } // bad code

const arrayClass& arrayClass::operator=(const arrayClass& otherList)
{
    if (this != &otherList)
    {
        delete [] list;
        maxSize = otherList.maxSize;
        length = otherList.length;

        list = new int[maxSize];

        for (int i=0; i<length; i++)
            list[i] = otherList.list[i];
    }

    return *this;
} // good code (with if statement

int main()
{
    arrayClass myList;
    myList = myList;

    return 0;
}