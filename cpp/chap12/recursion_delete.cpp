#include <iostream>

using namespace std;

void compare_and_output_equal_elements(const int* array1, const int* array2, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        if (array1[i] == array2[i]) {
            cout << "Equal elements found at index " << i << ": " << array1[i] << endl;
        }
    }
}

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {1, 3, 3, 6, 5};
    size_t array_size = sizeof(array1) / sizeof(array1[0]);

    compare_and_output_equal_elements(array1, array2, array_size);

    return 0;
}

