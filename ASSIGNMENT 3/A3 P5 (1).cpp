#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size], sum = 0;
    
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i]; // Add each element to sum
    }

    double average = static_cast<double>(sum) / size; // Calculate average

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}

