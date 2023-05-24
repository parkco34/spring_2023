#include <iostream>
using namespace std;

// Recursive function to perform sequential search
int recursiveSequentialSearch(int arr[], int index, int len, int key) {
    // Base case: If we have searched all elements, return -1
    // This means that the key is not present in the array
    if(index == len)
        return -1;
    
    // If the current element matches the key, return the index
    if(arr[index] == key)
        return index;
    
    // If the current element does not match the key, continue the search with the next element
    return recursiveSequentialSearch(arr, index + 1, len, key);
}

int main() {
    int arr[] = {10, 30, 20, 40, 50};
    int key = 40;
    int len = sizeof(arr) / sizeof(arr[0]);
    
    int index = recursiveSequentialSearch(arr, 0, len, key);
    
    if(index != -1) {
        cout << "Element " << key << " is present at index " << index;
    } else {
        cout << "Element " << key << " is not present in the array";
    }
    
    return 0;
}

