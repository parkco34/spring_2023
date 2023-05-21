#include <iostream>
using namespace std;

class arrayClass
{
    public:
        arrayClass(int size = 10);  // Added constructor
        ~arrayClass();  // Added destructor
        const arrayClass& operator=(const arrayClass& otherList);
        friend ostream& operator<<(ostream&, const arrayClass&);

    private:
        int *list;  // Used to create an array to store integers
        int length;
        int maxSize;
};

arrayClass::arrayClass(int size) : maxSize(size), length(0) { // Initialize maxSize, length, and allocate list
    list = new int[maxSize];
    for(int i=0; i < maxSize; ++i)
        list[i] = 0;
}

arrayClass::~arrayClass() {  // Destructor implementation
    delete[] list;
}

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
}

ostream& operator<<(ostream& osObject, const arrayClass& array)
{
    for (int i=0; i<array.length; i++)
        osObject << array.list[i] << " ";

    return osObject;
}

int main()
{
    const int MAX_SIZE = 10;
    arrayClass myList;
    arrayClass otherList;
    
    myList = otherList;

    return 0;
}
