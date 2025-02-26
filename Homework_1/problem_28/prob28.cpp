#include <iostream>
#include <string>
using namespace std;

bool isSubstring(string str1, string str2) {
    // Check if str1 is a substring of str2 or vice versa
    return (str2.find(str1) != string::npos || str1.find(str2) != string::npos);
}

int main() {
    string str1, str2;
    
    // Get two input strings
    cout << "Enter first string: ";
    cin >> str1;
    
    cout << "Enter second string: ";
    cin >> str2;
    
    // Check if one string is a substring of the other
    if (isSubstring(str1, str2)) {
        cout << "\"" << str1 << "\" is a substring of \"" << str2 << "\" or vice versa." << endl;
    } else {
        cout << "\"" << str1 << "\" is not a substring of \"" << str2 << "\"." << endl;
    }

    return 0;
}

