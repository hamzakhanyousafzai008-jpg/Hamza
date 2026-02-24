#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Using nested ternary operators
    result = (op == '+') ? (num1 + num2) :
             (op == '-') ? (num1 - num2) :
             (op == '*') ? (num1 * num2) :
             (op == '/') ? ((num2 != 0) ? (num1 / num2) : 0) :
             0;

    if (op == '/' && num2 == 0)
        cout << "Error: Division by zero!" << endl;
    else
        cout << "Result: " << result << endl;

    return 0;
}