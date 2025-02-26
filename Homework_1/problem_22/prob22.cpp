#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    
    // Input the number of elements
    cout << "Enter the number of elements: ";
    cin >> N;

    vector<int> numbers(N);

    // Input N whole numbers
    cout << "Enter " << N << " whole numbers:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    // Check if the sequence is sorted in ascending or descending order
    bool ascending = true, descending = true;

    for (int i = 1; i < N; i++) {
        if (numbers[i] < numbers[i - 1]) {
            ascending = false;
        }
        if (numbers[i] > numbers[i - 1]) {
            descending = false;
        }
    }

    // Print result
    if (ascending || descending) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

