#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string binary;
    int decimal = 0;

    cout << "Enter a binary number: ";
    cin >> binary;

    // Convert binary to decimal
    int length = binary.length();
    for (int i = 0; i < length; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            cout << "Invalid binary number! Please enter only 0s and 1s." << endl;
            return 1; // Exit with error
        }
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i); // Convert to decimal using powers of 2
        }
    }

    cout << "Decimal representation: " << decimal << endl;

    return 0;
}

