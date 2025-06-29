// ISE102 Assessment 1
// Student: Aayush Parashar  |  ID: A00167472
// Task 3 – Breaks & Exits (C++ Version)

/*
Program: running_average.cpp
Description: Read numbers until the user enters 'q' or blank line, then print average.
*/

#include <iostream>
#include <string>
#include <iomanip>

int main() {
    double total = 0.0;
    int count = 0;
    
    while (true) {
        std::string data;
        std::cout << "Enter number (q to quit): ";
        std::getline(std::cin, data);
        
        // Remove leading/trailing whitespace
        data.erase(0, data.find_first_not_of(" \t"));
        data.erase(data.find_last_not_of(" \t") + 1);
        
        if (data == "q" || data == "Q" || data.empty()) {
            break;
        }
        
        try {
            double num = std::stod(data);
            total += num;
            count++;
        } catch (const std::exception& e) {
            std::cout << "Invalid number, try again." << std::endl;
            continue;
        }
    }
    
    if (count > 0) {
        std::cout << "Average of " << count << " numbers is " 
                  << std::fixed << std::setprecision(2) << (total / count) << std::endl;
    } else {
        std::cout << "No valid numbers entered." << std::endl;
    }
    
    return 0;
} 