#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

void searchCSV(const std::string& filename, int column, const std::string& value) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file" << std::endl;
        return;
    }

    std::string line;
    std::vector<std::string> headers;
    if (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string cell;
        while (std::getline(ss, cell, ',')) {
            headers.push_back(cell);
        }
    }

    int rowNumber = 1;
    while (std::getline(file, line)) {
        rowNumber++;
        std::stringstream ss(line);
        std::vector<std::string> row;
        std::string cell;
        while (std::getline(ss, cell, ',')) {
            row.push_back(cell);
        }
        if (column < row.size() && row[column] == value) {
            std::cout << "Row " << rowNumber << ": " << line << std::endl;
        }
    }
    file.close();
}

int main() {
    std::string filename = "example.csv";
    int column;
    std::string value;
    std::cout << "Enter column number: ";
    std::cin >> column;
    std::cout << "Enter search value: ";
    std::cin >> value;
    searchCSV(filename, column, value);
    return 0;
}

