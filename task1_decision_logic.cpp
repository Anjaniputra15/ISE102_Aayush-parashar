// ISE102 Assessment 1
// Student: Aayush Parashar  |  ID: A00167472
// Task 1 – Decision Logic (C++ Version)

/*
Program: ticket_pricing.cpp
Description: Determine movie ticket price based on age and membership.
*/

#include <iostream>
#include <string>
#include <iomanip>

double calc_ticket_price(int age, bool is_member) {
    /*
    Return ticket price based on simple rules:
    - Children (<=12): $8
    - Seniors (>=65): $10
    - Adults: $15
    Members get 10% off final price.
    */
    double price;
    
    if (age <= 12) {
        price = 8.0;
    } else if (age >= 65) {
        price = 10.0;
    } else {
        price = 15.0;
    }

    if (is_member) {
        price *= 0.9;
    }
    return price;
}

int main() {
    try {
        int age;
        std::string member_input;
        bool is_member;
        
        std::cout << "Enter age: ";
        std::cin >> age;
        
        if (std::cin.fail()) {
            throw std::runtime_error("Invalid input");
        }
        
        std::cout << "Member (y/n)? ";
        std::cin.ignore(); // Clear the buffer
        std::getline(std::cin, member_input);
        
        is_member = (member_input == "y" || member_input == "Y");
        
        double cost = calc_ticket_price(age, is_member);
        std::cout << "Ticket price: $" << std::fixed << std::setprecision(2) << cost << std::endl;
        
    } catch (const std::exception& e) {
        std::cout << "Invalid input: age must be an integer." << std::endl;
    }
    
    return 0;
} 