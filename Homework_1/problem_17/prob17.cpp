#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number (0-15): ";
    cin >> num;

    if (num < 0 || num > 15) {
        cout << "Invalid input! Please enter a number between 0 and 15." << endl;
        return 1; // Exit with error
    }

    // Convert to 4-bit binary manually
    int binary[4];

    for (int i = 3; i >= 0; i--) {  // Loop to extract 4 bits
        binary[i] = num % 2;  // Get remainder (0 or 1)
        num /= 2;             // Divide by 2 for next bit
    }

    // Print the 4-bit binary representation
    cout << "4-bit binary representation: ";
    for (int i = 0; i < 4; i++) {
        cout << binary[i];
    }
    cout << endl;

    return 0;
}

