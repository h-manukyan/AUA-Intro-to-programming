#include <iostream>
#include <fstream>

void findBraces(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file" << std::endl;
        return;
    }

    char ch;
    int row = 1, col = 0;

    std::cout << "Locations of '{' and '}':" << std::endl;
    while (file.get(ch)) {
        col++;
        if (ch == '\n') {
            row++;
            col = 0;
        }
        if (ch == '{' || ch == '}') {
            std::cout << ch << " found at row " << row << ", column " << col << std::endl;
        }
    }
    file.close();
}

int main() {
    findBraces(__FILE__);
    return 0;
}
