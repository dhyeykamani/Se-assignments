#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str) {
    int left = 0, right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    return true; // It's a palindrome
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindrome(input))
        cout << input << " is a palindrome.\n";
    else
        cout << input << " is not a palindrome.\n";

    return 0;
}

