#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    srand(time(0)); // Seed for random number generation
    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    cout << "Guess a number between 1 and 100!\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number.\n";
            break;
        }
    }

    return 0;
}

