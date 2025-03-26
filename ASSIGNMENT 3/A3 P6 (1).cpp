#include <iostream>

using namespace std;

class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero!\n";
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    char op;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+': cout << "Result: " << calc.add(num1, num2) << endl; break;
        case '-': cout << "Result: " << calc.subtract(num1, num2) << endl; break;
        case '*': cout << "Result: " << calc.multiply(num1, num2) << endl; break;
        case '/': cout << "Result: " << calc.divide(num1, num2) << endl; break;
        default: cout << "Invalid operator!\n";
    }

    return 0;
}

