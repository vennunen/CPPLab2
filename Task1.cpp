#include <iostream>
#include <cmath> // for ceil and floor

using namespace std;

// Multiply two integers
int multiply(int a, int b) {
    return a * b;
}

// Multiply two doubles
double multiply(double a, double b) {
    return a * b;
}

// Multiply int and double with flag
int multiply(int a, double b, bool flag) {
    double result = a * b;
    if (flag) {
        // If flag is true, return ceiled or floored result based on sign
        return (result >= 0) ? ceil(result) : floor(result);
    } else {
        return static_cast<int>(result); // truncated
    }
}

int main() {
    // Calling the functions with different inputs

    // Two integers
    int intResult = multiply(4, 5);
    cout << "multiply(4, 5) = " << intResult << endl;

    // Two doubles
    double doubleResult = multiply(3.2, 2.5);
    cout << "multiply(3.2, 2.5) = " << doubleResult << endl;

    // One int, one double, flag false
    int mixResult1 = multiply(4, 2.6, false);
    cout << "multiply(4, 2.6, false) = " << mixResult1 << endl;

    // One int, one double, flag true
    int mixResult2 = multiply(4, 2.6, true);
    cout << "multiply(4, 2.6, true) = " << mixResult2 << endl;

    // Test with negative result
    int mixResult3 = multiply(-3, 2.4, true);
    cout << "multiply(-3, 2.4, true) = " << mixResult3 << endl;

    return 0;
}
