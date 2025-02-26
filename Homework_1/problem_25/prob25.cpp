#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, K;
    
    // Get the size of the sequence (N) and the position (M) to insert
    cout << "Enter the number of elements (N): ";
    cin >> N;
    
    vector<int> numbers(N);
    
    cout << "Enter the elements: ";
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i]; // Fill the vector with user input
    }
    
    // Get the number K to insert
    cout << "Enter the number to insert (K): ";
    cin >> K;
    
    // Insert K at the beginning
    numbers.insert(numbers.begin(), K);
    cout << "After inserting " << K << " at the beginning: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Insert K at the end
    numbers.push_back(K);
    cout << "After inserting " << K << " at the end: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Insert K at the M-th position (1-based)
    cout << "Enter the position (M) to insert (1-based index): ";
    cin >> M;
    
    if (M > 0 && M <= numbers.size() + 1) {
        numbers.insert(numbers.begin() + M - 1, K); // Insert at M-th position (convert to 0-based index)
        cout << "After inserting " << K << " at position " << M << ": ";
        for (int num : numbers) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid position!" << endl;
    }

    return 0;
}

