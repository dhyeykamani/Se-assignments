#include <iostream>

using namespace std;

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    double num1, num2;
    char op;

    cout << "Simple Calculator\n";
    cout << "Enter an operation (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+': cout << "Result: " << add(num1, num2) << endl; break;
        case '-': cout << "Result: " << subtract(num1, num2) << endl; break;
        case '*': cout << "Result: " << multiply(num1, num2) << endl; break;
        case '/': 
            if (num2 != 0) 
                cout << "Result: " << divide(num1, num2) << endl;
            else 
                cout << "Error: Division by zero!" << endl;
            break;
        default: cout << "Invalid operator!" << endl;
    }

    return 0;
}

// Function definitions
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }

