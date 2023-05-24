#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int seqSearch(const int list[], int listLength, int searchItem)
{
    int loc;
    bool found = false;
    loc = 0;

    while ( loc < listLength && !found) {
        if (list[loc] == searchItem)
            found = true;
        else
            loc++;
    }

    if (found)
        return loc;
    else
        return -1;
}

void bubbleSort(int list[], int length)
{
    int temp;

    for (int iteration=1; iteration < length;  iteration++) {
        for (int index=0; index < length-iteration; index++) {
            if (list[index] > list[index+1]) {
                temp = list[index];
                list[index] = list[index+1];
                list[index+1] = temp;
            }
        }
    }
}

void insertionSort(int list[], int listLength)
{
    int firstOutOfOrder, location;
    int temp;

    for (firstOutOfOrder=1; firstOutOfOrder < listLength; firstOutOfOrder++) {
        temp  = list[firstOutOfOrder];
        location = firstOutOfOrder;

        do {
            list[location]  = list[location-1];
            location--;
        } while (location > 0 && list[location-1] > temp);

        list[location] = temp;
    }
}

int binarySearch(const int list[], int listLength, int searchItem)
{
    int first = 0;
    int last = listLength - 1;
    int mid;

    bool found = false;

    while(first <= last && !found) {
        mid = (first + last) / 2;

        if (list[mid] == searchItem)
            found = true;
        else if (list[mid] > searchItem)
            last = mid - 1;
        else
            first = mid + 1;
    }

    if (found)
        return mid;
    else
        return -1;
}

int main()
{
    const int SIZE = 73;
    // Sequential Search
    const int MAX_ELS = 1000;
    int myList[MAX_ELS];

    for (int i=0; i<MAX_ELS; i++)
        myList[i] = i;

     cout << "Sequential Search: " << seqSearch(myList, MAX_ELS, 73) << endl;

    // Bubble sort
    srand(time(0));
    int arr[SIZE];
    for (int i=0; i<SIZE; i++)
        arr[i] = rand() % 101;
   
    cout << "Before sorting: " << endl;
    for (int i=0; i<SIZE; i++)
        cout << arr[i] << " ";

    bubbleSort(arr, SIZE);

    cout << endl << "After sorting: " << endl;
    for (int i=0; i<SIZE; i++)
        cout << arr[i] << " ";


    // Insertion sort
    int arr2[SIZE];
    cout << "Before Insertion Sort" << endl;
    for (int i=0; i<SIZE; i++) {
        arr2[i] = rand() % 101;
    }
    cout << "Before Insertion Sorting: " << endl;
    for (int i=0; i<SIZE; i++) {
        cout << arr2[i] << " ";
    }
    insertionSort(arr2, SIZE);
    cout << endl << "After Insertion Sorting: " << endl;
    for(int i=0; i<SIZE; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // Binary Search
    int arr3[SIZE];
    for (int i=0; i<SIZE; i++) {
        arr3[i] = rand() % 101;
    }
    cout << "Before binary search for 37: " << endl;
    for (int i=0;i<SIZE; i++) {
        cout << arr3[i] << " ";
    }
    cout << "\nBinary search result: " << binarySearch(arr3 , SIZE, 37) << endl;

    return 0;
}