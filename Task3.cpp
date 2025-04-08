#include <iostream>
using namespace std;

int main() {
    double value1, value2, result;
    char op;

    // User inputs
    cout << "Enter first number: ";
    cin >> value1;

    cout << "Enter second number: ";
    cin >> value2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Calculator using switch
    switch(op) {
        case '+':
            result = value1 + value2;
            cout << "Result: " << value1 << " + " << value2 << " = " << result << endl;
            break;
        case '-':
            result = value1 - value2;
            cout << "Result: " << value1 << " - " << value2 << " = " << result << endl;
            break;
        case '*':
            result = value1 * value2;
            cout << "Result: " << value1 << " * " << value2 << " = " << result << endl;
            break;
        case '/':
            if (value2 != 0) {
                result = value1 / value2;
                cout << "Result: " << value1 << " / " << value2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operator entered." << endl;
    }

    return 0;
}
