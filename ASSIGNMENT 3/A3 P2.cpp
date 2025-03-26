#include <iostream>

using namespace std;

int main() {
    // 1. Variables and Constants
    cout << "### Variables and Constants ###\n";
    int num1 = 10;            // Integer variable
    double num2 = 5.5;        // Double variable
    const float PI = 3.1415;  // Constant variable

    // Performing operations
    cout << "Integer: " << num1 << ", Double: " << num2 << ", Constant PI: " << PI << endl;
    cout << "Sum: " << num1 + num2 << endl;
    
    // Uncommenting the next line will cause an error because PI is a constant
    // PI = 3.14; 

    cout << "\n### Type Conversion ###\n";
    
    // 2. Type Conversion (Implicit and Explicit)
    double resultImplicit = num1 + num2; // Implicit conversion (int to double)
    cout << "Implicit Conversion (int + double): " << resultImplicit << endl;

    int resultExplicit = (int)num2 + num1; // Explicit conversion (double to int)
    cout << "Explicit Conversion ((int)double + int): " << resultExplicit << endl;

    cout << "\n### Operator Demonstration ###\n";
    
    // 3. Operator Demonstration
    int a = 5, b = 3;

    // Arithmetic Operators
    cout << "Arithmetic Operators:\n";
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;
    cout << "Modulus: " << (a % b) << endl;

    // Relational Operators
    cout << "\nRelational Operators:\n";
    cout << (a > b) << " (a > b)\n";
    cout << (a < b) << " (a < b)\n";
    cout << (a == b) << " (a == b)\n";
    cout << (a != b) << " (a != b)\n";

    // Logical Operators
    cout << "\nLogical Operators:\n";
    cout << ((a > b) && (b > 0)) << " ((a > b) && (b > 0))\n";
    cout << ((a > b) || (b < 0)) << " ((a > b) || (b < 0))\n";
    cout << (!(a > b)) << " (!(a > b))\n";

    // Bitwise Operators
    cout << "\nBitwise Operators:\n";
    cout << (a & b) << " (a & b)\n";  // AND
    cout << (a | b) << " (a | b)\n";  // OR
    cout << (a ^ b) << " (a ^ b)\n";  // XOR
    cout << (a << 1) << " (a << 1)\n"; // Left shift
    cout << (a >> 1) << " (a >> 1)\n"; // Right shift

    return 0;
}

