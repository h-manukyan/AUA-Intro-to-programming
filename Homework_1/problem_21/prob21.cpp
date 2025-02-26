#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, sum = 0;

    // Input the number of elements
    cout << "Enter the number of elements: ";
    cin >> N;

    vector<int> numbers(N);

    // Input N whole numbers and calculate sum
    cout << "Enter " << N << " whole numbers:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
        sum += numbers[i];  // Add each number to sum
    }

    // Print the sum of all numbers
    cout << "Sum of all numbers: " << sum << endl;

    return 0;
}

