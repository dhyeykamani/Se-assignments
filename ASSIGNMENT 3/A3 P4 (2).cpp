#include <iostream>

using namespace std;

// Function prototype
long long factorial(int n);

int main() {
    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;

    if (num < 0)
        cout << "Factorial of a negative number is undefined.\n";
    else
        cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}

// Recursive function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1; // Base case
    else
        return n * factorial(n - 1); // Recursive case
}

