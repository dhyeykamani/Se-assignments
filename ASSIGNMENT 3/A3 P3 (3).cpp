#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter a number for multiplication table: ";
    cin >> num;

    cout << "Multiplication Table for " << num << ":\n";

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }

    return 0;
}

