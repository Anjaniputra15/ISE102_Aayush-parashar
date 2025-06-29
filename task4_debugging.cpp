// ISE102 Assessment 1
// Student: Aayush Parashar  |  ID: A00167472
// Task 4 – Code Debugging (C++ Version)

/*
Program: safe_division.cpp
Description: Fixes bugs in a provided 'safe_divide' function.
*/

/*
// ----- Start original buggy code -----
// double safe_divide(double a, double b) {
//     if (b = 0) {  // Bug: assignment instead of comparison
//         return -1; // Bug: should return special value or throw
//     }
//     return a / b;
// }
// ----- End original buggy code -----
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <optional>

std::optional<double> safe_divide(double a, double b) {
    /*
    Divide a by b, returning std::nullopt if b is zero.
    */
    if (b == 0) {
        return std::nullopt;
    }
    return a / b;
}

int main() {
    std::cout << "Division utility. Enter 'q' to quit." << std::endl;
    
    while (true) {
        std::string first, second;
        
        std::cout << "First number: ";
        std::getline(std::cin, first);
        if (first == "q" || first == "Q") {
            break;
        }
        
        std::cout << "Second number: ";
        std::getline(std::cin, second);
        if (second == "q" || second == "Q") {
            break;
        }
        
        try {
            double num1 = std::stod(first);
            double num2 = std::stod(second);
            
            auto result = safe_divide(num1, num2);
            
            if (!result.has_value()) {
                std::cout << "Cannot divide by zero." << std::endl;
            } else {
                std::cout << num1 << " / " << num2 << " = " 
                          << std::fixed << std::setprecision(2) << result.value() << std::endl;
            }
        } catch (const std::exception& e) {
            std::cout << "Please enter valid numbers." << std::endl;
            continue;
        }
    }
    
    return 0;
} 