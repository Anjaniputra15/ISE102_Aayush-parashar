// ISE102 Assessment 1
// Student: Aayush Parashar  |  ID: A00167472
// Task 1 – Decision Logic (Rust Version)

/*
Program: ticket_pricing.rs
Description: Determine movie ticket price based on age and membership.
*/

use std::io::{self, Write};

fn calc_ticket_price(age: i32, is_member: bool) -> f64 {
    /*
    Return ticket price based on simple rules:
    - Children (<=12): $8
    - Seniors (>=65): $10
    - Adults: $15
    Members get 10% off final price.
    */
    let price = if age <= 12 {
        8.0
    } else if age >= 65 {
        10.0
    } else {
        15.0
    };

    if is_member {
        price * 0.9
    } else {
        price
    }
}

fn main() {
    print!("Enter age: ");
    io::stdout().flush().unwrap();
    
    let mut age_input = String::new();
    io::stdin().read_line(&mut age_input).unwrap();
    
    let age: i32 = match age_input.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Invalid input: age must be an integer.");
            return;
        }
    };
    
    print!("Member (y/n)? ");
    io::stdout().flush().unwrap();
    
    let mut member_input = String::new();
    io::stdin().read_line(&mut member_input).unwrap();
    
    let is_member = member_input.trim().to_lowercase() == "y";
    
    let cost = calc_ticket_price(age, is_member);
    println!("Ticket price: ${:.2}", cost);
} 