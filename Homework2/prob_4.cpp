#include <iostream>
#include <string>

std::string compressString(const std::string& str) {
    std::string compressed;
    int count = 1;
    for (size_t i = 0; i < str.length(); i++) {
        if (i + 1 < str.length() && str[i] == str[i + 1]) {
            count++;
        } else {
            compressed += str[i] + std::to_string(count);
            count = 1;
        }
    }
    return compressed;
}

int main() {
    std::string str = "aaabbc";
    std::cout << "Compressed: " << compressString(str) << std::endl;
    return 0;
}
