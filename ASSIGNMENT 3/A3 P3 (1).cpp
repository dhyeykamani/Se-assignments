#include <iostream>

using namespace std;

int main() {
    int marks;

    // Input marks
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    // Check grade using if-else conditions
    if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}

