#include <iostream>
#include <cstring>

void reverseString(char* str) {
    if (!str) return;
    char* start = str;
    char* end = str + strlen(str) - 1;
    while (start < end) {
        std::swap(*start, *end);
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, World!";
    reverseString(str);
    std::cout << "Reversed: " << str << std::endl;
    return 0;
}
