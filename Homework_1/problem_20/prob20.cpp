#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    
    // Input the number of elements
    cout << "Enter the number of elements: ";
    cin >> N;

    vector<int> numbers(N);

    // Input N numbers
    cout << "Enter " << N << " numbers:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    // Print numbers in reverse order
    cout << "Numbers in reverse order: ";
    for (int i = N - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

