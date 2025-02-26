#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {

    srand(std::time(0));
    int target = std::rand() % 100 + 1;  // Random number between 1 and 100
    int guess, attempts = 0;

    cout << "Guess the number (between 1 and 100):" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > target) {
            cout << "Too high! Try again." << endl;
        } else if (guess < target) {
            cout << "Too low! Try again." << endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != target);

    return 0;
}

