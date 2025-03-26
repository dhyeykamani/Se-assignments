#include <iostream>

using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) { // Outer loop (rows)
        for (int j = 1; j <= i; j++) { // Inner loop (columns)
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

