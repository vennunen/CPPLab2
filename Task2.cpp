#include <iostream>
using namespace std;

// Swap without pointers or references
void swapByValue(float a, float b) {
    float temp = a;
    a = b;
    b = temp;
    cout << "[Inside swapByValue] a = " << a << ", b = " << b << endl;
}

// Swap using pointers
void swapUsingPointers(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// Swap using references
void swapUsingReferences(float& a, float& b) {
    float temp = a;
    a = b;
    b = temp;
}

int main() {
    float x = 3.5, y = 7.2;

    cout << "Original values: x = " << x << ", y = " << y << endl;

    // Attempt swap by value
    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << ", y = " << y << " (no change)\n";

    // Swap using pointers
    swapUsingPointers(&x, &y);
    cout << "After swapUsingPointers: x = " << x << ", y = " << y << endl;

    // Swap again using references to reverse back
    swapUsingReferences(x, y);
    cout << "After swapUsingReferences: x = " << x << ", y = " << y << endl;

    return 0;
}
