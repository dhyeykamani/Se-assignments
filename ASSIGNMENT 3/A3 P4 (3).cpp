#include <iostream>

using namespace std;

int globalVar = 10; // Global variable

void demonstrateScope() {
    int localVar = 20; // Local variable
    cout << "Inside function:\n";
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;
}

int main() {
    int localVar = 30; // Another local variable in main()

    cout << "Inside main:\n";
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;

    demonstrateScope();

    return 0;
}

