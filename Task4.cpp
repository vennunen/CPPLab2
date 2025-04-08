#include <iostream>
using namespace std;

int main() {
    double number;

    cout << "Enter numbers (negative number to stop):\n";

    while (true) {
        cout << "Enter a number: ";
        cin >> number;

        if (number < 0) {
            cout << "Negative number entered. Exiting program.\n";
            break; // stop the loop
        }

        if (number == 0) {
            cout << "Zero entered. Skipping...\n";
            continue; // skip to next iteration
        }

        // Print square
        cout << "Square of " << number << " is " << (number * number) << endl;
    }

    return 0;
}
