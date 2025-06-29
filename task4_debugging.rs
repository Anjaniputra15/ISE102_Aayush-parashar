// ISE102 Assessment 1
// Student: Aayush Parashar  |  ID: A00167472
// Task 4 – Code Debugging (Rust Version)

/*
Program: safe_division.rs
Description: Fixes bugs in a provided 'safe_divide' function.
*/

use std::io::{self, Write};

fn safe_divide(a: f64, b: f64) -> Option<f64> {
    if b == 0.0 {
        None
    } else {
        Some(a / b)
    }
}

fn main() {
    println!("Division utility. Enter 'q' to quit.");
    loop {
        print!("First number: ");
        io::stdout().flush().unwrap();
        let mut first = String::new();
        io::stdin().read_line(&mut first).unwrap();
        let first = first.trim();
        if first.eq_ignore_ascii_case("q") {
            break;
        }
        print!("Second number: ");
        io::stdout().flush().unwrap();
        let mut second = String::new();
        io::stdin().read_line(&mut second).unwrap();
        let second = second.trim();
        if second.eq_ignore_ascii_case("q") {
            break;
        }
        let num1 = match first.parse::<f64>() {
            Ok(n) => n,
            Err(_) => {
                println!("Please enter valid numbers.");
                continue;
            }
        };
        let num2 = match second.parse::<f64>() {
            Ok(n) => n,
            Err(_) => {
                println!("Please enter valid numbers.");
                continue;
            }
        };
        match safe_divide(num1, num2) {
            Some(result) => println!("{} / {} = {:.2}", num1, num2, result),
            None => println!("Cannot divide by zero."),
        }
    }
} 