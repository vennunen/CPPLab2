#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int array1[size] = {1, 4, 7, 10, 15};
    int array2[size];

    // Pointer to start of array1
    int* ptr = array1;

    // Traverse using pointer and reverse store
    for (int i = 0; i < size; i++) {
        array2[size - 1 - i] = *(ptr + i);
    }

    // Print reversed array
    cout << "Reversed array:\n";
    for (int i = 0; i < size; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;

    return 0;
}
