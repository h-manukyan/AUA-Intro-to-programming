#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    
    // Get the size of the sequence (N) and the index to delete (M)
    cout << "Enter the number of elements (N): ";
    cin >> N;
    
    vector<int> numbers(N);
    
    cout << "Enter the elements: ";
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i]; // Fill the vector with user input
    }
    
    cout << "Enter the position to delete (M): ";
    cin >> M;
    
    if (M > 0 && M <= N) {
        numbers.erase(numbers.begin() + M - 1); // Delete M-th element (1-based index)
        
        cout << "Modified sequence: ";
        for (int num : numbers) {
            cout << num << " "; // Print modified sequence
        }
        cout << endl;
    } else {
        cout << "Invalid position!" << endl;
    }

    return 0;
}

