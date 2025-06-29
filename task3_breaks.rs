// ISE102 Assessment 1
// Student: Aayush Parashar  |  ID: A00167472
// Task 3 – Breaks & Exits (Rust Version)

/*
Program: running_average.rs
Description: Read numbers until the user enters 'q' or blank line, then print average.
*/

use std::io::{self, Write};

fn main() {
    let mut total = 0.0;
    let mut count = 0;
    loop {
        print!("Enter number (q to quit): ");
        io::stdout().flush().unwrap();
        let mut data = String::new();
        io::stdin().read_line(&mut data).unwrap();
        let data = data.trim();
        if data.eq_ignore_ascii_case("q") || data.is_empty() {
            break;
        }
        match data.parse::<f64>() {
            Ok(num) => {
                total += num;
                count += 1;
            },
            Err(_) => {
                println!("Invalid number, try again.");
                continue;
            }
        }
    }
    if count > 0 {
        println!("Average of {} numbers is {:.2}", count, total / count as f64);
    } else {
        println!("No valid numbers entered.");
    }
} 