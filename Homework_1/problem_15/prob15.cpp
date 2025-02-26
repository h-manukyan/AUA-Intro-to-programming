#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    vector<int> numbers(10);
    int min = limits<int>::max();
    int max = limits<int>::min();

    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
        if (numbers[i] < minVal) min = numbers[i]; // Update min
        if (numbers[i] > maxVal) max = numbers[i]; // Update max
    }

    cout << "Minimum number: " << min << endl;
    cout << "Maximum number: " << max << endl;

    return 0;
}

