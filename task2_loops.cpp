// ISE102 Assessment 1
// Student: Aayush Parashar  |  ID: A00167472
// Task 2 – Loops (C++ Version)

/*
Program: multiplication_table.cpp
Description: Print a formatted multiplication table up to N.
*/

#include <iostream>
#include <iomanip>

void print_table(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << std::endl;
    }
}

int main() {
    try {
        int n;
        std::cout << "Table size (1‑20): ";
        std::cin >> n;
        
        if (std::cin.fail()) {
            throw std::runtime_error("Invalid input");
        }
        
        if (n < 1 || n > 20) {
            throw std::runtime_error("Out of range");
        }
        
        print_table(n);
        
    } catch (const std::exception& e) {
        std::cout << "Please enter an integer between 1 and 20." << std::endl;
    }
    
    return 0;
} 