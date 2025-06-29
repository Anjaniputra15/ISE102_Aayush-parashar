// ISE102 Assessment 1
// Student: Aayush Parashar  |  ID: A00167472
// Task 2 – Loops (Rust Version)

/*
Program: multiplication_table.rs
Description: Print a formatted multiplication table up to N.
*/

use std::io::{self, Write};

fn print_table(n: usize) {
    for i in 1..=n {
        for j in 1..=n {
            print!("{:4}", i * j);
        }
        println!();
    }
}

fn main() {
    print!("Table size (1‑20): ");
    io::stdout().flush().unwrap();
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let n: usize = match input.trim().parse() {
        Ok(num) if num >= 1 && num <= 20 => num,
        _ => {
            println!("Please enter an integer between 1 and 20.");
            return;
        }
    };
    print_table(n);
} 