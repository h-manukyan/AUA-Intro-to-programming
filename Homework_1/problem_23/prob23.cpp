#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    char order;

    // Input the number of elements
    cout << "Enter the number of elements: ";
    cin >> N;

    vector<int> numbers(N);

    // Input N numbers
    cout << "Enter " << N << " numbers:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    // Ask the user for sorting order
    cout << "Enter 'A' for ascending or 'D' for descending order: ";
    cin >> order;

    // Sort based on user choice
    if (order == 'A' || order == 'a') {
        sort(numbers.begin(), numbers.end());
    } else if (order == 'D' || order == 'd') {
        sort(numbers.begin(), numbers.end(), greater<int>());
    } else {
        cout << "Invalid input! Please enter 'A' or 'D'." << endl;
        return 1; // Exit with error
    }

    // Print sorted sequence
    cout << "Sorted sequence: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

