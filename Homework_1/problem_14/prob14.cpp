#include <iostream>

using namespace std;

int main() {
    int low = 1, high = 100, guess, attempts = 0;
    char response;

    cout << "Think of a number between 1 and 100. I will try to guess it!" << endl;

    while (low <= high) {
        guess = low + (high - low) / 2; // Binary search approach
        attempts++;

        cout << "Is your number " << guess << "? (h = too high, l = too low, c = correct): ";
        cin >> response;

        if (response == 'c') {
            cout << "Great! I guessed your number in " << attempts << " attempts." << endl;
            break;
        } else if (response == 'h') {
            high = guess - 1; // Reduce upper bound
        } else if (response == 'l') {
            low = guess + 1; // Increase lower bound
        } else {
            cout << "Invalid response! Please enter 'h', 'l', or 'c'." << endl;
        }
    }

    return 0;
}

