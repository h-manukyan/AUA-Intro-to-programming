#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    char choice;
    
    // Get the input word/string
    cout << "Enter a word or string: ";
    getline(cin, input);
    
    // Ask user whether to convert to uppercase or lowercase
    cout << "Enter 'U' to convert to uppercase or 'L' to convert to lowercase: ";
    cin >> choice;
    
    // Convert to uppercase or lowercase based on user choice
    if (choice == 'U' || choice == 'u') {
        for (char &c : input) {
            if (c >= 'a' && c <= 'z') {
                c = c - 32;  // Convert to uppercase using ASCII value difference
            }
        }
        cout << "Converted to uppercase: " << input << endl;
    } else if (choice == 'L' || choice == 'l') {
        for (char &c : input) {
            if (c >= 'A' && c <= 'Z') {
                c = c + 32;  // Convert to lowercase using ASCII value difference
            }
        }
        cout << "Converted to lowercase: " << input << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

