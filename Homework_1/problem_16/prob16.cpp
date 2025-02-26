#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() {
    vector<int> numbers;
    array<int, 10> count = {0}; // Array to count occurrences of numbers 1-10
    int num;

    cout << "Enter numbers between 1 and 10 (enter -1 to stop):" << endl;

    while (true) {
        cin >> num;
        if (num == -1) break;  // Stop when -1 is entered
        if (num >= 1 && num <= 10) {
            numbers.push_back(num);
            count[num - 1]++;  // Increment count for the corresponding number
        } else {
            cout << "Invalid number! Please enter a number between 1 and 10." << endl;
        }
    }

    cout << "\nNumber frequencies:\n";
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            cout << (i + 1) << " was entered " << count[i] << " times." << endl;
        }
    }

    return 0;
}

