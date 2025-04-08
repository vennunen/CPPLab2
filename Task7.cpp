#include <iostream>
using namespace std;

int main() {
    int x = 100;

    int* p1 = &x;  // p1 points to x
    int* p2 = p1;  // p2 points to the same address

    cout << "Initial value of x: " << x << endl;
    cout << "Value via p1: " << *p1 << endl;
    cout << "Value via p2: " << *p2 << endl;

    // Modify value using p1
    *p1 = 200;

    cout << "\nAfter modifying *p1 to 200:\n";
    cout << "Value of x: " << x << endl;
    cout << "Value via p1: " << *p1 << endl;
    cout << "Value via p2: " << *p2 << endl;

    // Modify value using p2
    *p2 = 300;

    cout << "\nAfter modifying *p2 to 300:\n";
    cout << "Value of x: " << x << endl;
    cout << "Value via p1: " << *p1 << endl;
    cout << "Value via p2: " << *p2 << endl;

    return 0;
}
