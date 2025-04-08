#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int& refA = a; // refA is a reference to a

    cout << "Initial value of a: " << a << endl;
    cout << "Initial value via refA: " << refA << endl;

    // Modify the reference
    refA = 30;

    cout << "\nAfter modifying refA to 30:\n";
    cout << "Value of a: " << a << endl;
    cout << "Value via refA: " << refA << endl;

    return 0;
}
