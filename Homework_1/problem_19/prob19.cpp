#include <iostream>

using namespace std;

int main() {
    int arr[10];
    int N, index = -1;

    // Input 10 integers
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Input value to search and remove
    cout << "Enter the number to remove: ";
    cin >> N;

    // Find the first occurrence of N
    for (int i = 0; i < 10; i++) {
        if (arr[i] == N) {
            index = i;
            break;
        }
    }

    // If found, shift elements left and set last element to 0
    if (index != -1) {
        for (int i = index; i < 9; i++) {
            arr[i] = arr[i + 1];
        }
        arr[9] = 0; // Set last element to 0
    } else {
        cout << "Number not found in the array." << endl;
    }

    // Print final array
    cout << "Final array: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

