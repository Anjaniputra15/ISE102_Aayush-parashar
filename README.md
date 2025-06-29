# ISE102 Assessment 1 - Python, C++, and Rust Programming Fundamentals

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

**Student:** Aayush Parashar  
**Student ID:** A00167472  
**Course:** ISE102 - Introduction to Software Engineering

## Overview

This assessment demonstrates fundamental programming concepts through four practical tasks, each implemented in Python, C++, and Rust. The tasks cover decision logic, loops, control flow, and debugging techniques.

## Project Structure

```
ISE102_ParasharAayush_A1/
├── README.md                 # This comprehensive documentation
├── README.txt                # Original brief instructions
├── task1_decision_logic.py   # Decision logic (Python)
├── task1_decision_logic.cpp  # Decision logic (C++)
├── task1_decision_logic.rs   # Decision logic (Rust)
├── task2_loops.py            # Loops (Python)
├── task2_loops.cpp           # Loops (C++)
├── task2_loops.rs            # Loops (Rust)
├── task3_breaks.py           # Breaks & exits (Python)
├── task3_breaks.cpp          # Breaks & exits (C++)
├── task3_breaks.rs           # Breaks & exits (Rust)
├── task4_debugging.py        # Debugging (Python)
├── task4_debugging.cpp       # Debugging (C++)
└── task4_debugging.rs        # Debugging (Rust)
```

## Task Descriptions

### Task 1: Decision Logic

**Purpose:** Demonstrates decision logic and conditional statements

- **Python:** `task1_decision_logic.py`
- **C++:** `task1_decision_logic.cpp`
- **Rust:** `task1_decision_logic.rs`

**Features:**
- Calculates movie ticket prices based on age categories
- Implements membership discount logic
- Handles input validation and error handling

**Age Categories:**
- Children (≤12): $8
- Seniors (≥65): $10  
- Adults (13-64): $15
- Members receive 10% discount on final price

### Task 2: Loops

**Purpose:** Demonstrates loop constructs and nested loops

- **Python:** `task2_loops.py`
- **C++:** `task2_loops.cpp`
- **Rust:** `task2_loops.rs`

**Features:**
- Generates formatted multiplication tables
- Uses nested loops for table generation
- Implements input validation (1-20 range)
- Formats output with proper spacing

### Task 3: Breaks & Exits

**Purpose:** Demonstrates control flow with breaks and exits

- **Python:** `task3_breaks.py`
- **C++:** `task3_breaks.cpp`
- **Rust:** `task3_breaks.rs`

**Features:**
- Continuously reads numbers until user quits
- Calculates running average of entered numbers
- Uses `break` statement for loop termination
- Handles invalid input gracefully
- Supports 'q' or blank line to quit

### Task 4: Code Debugging

**Purpose:** Demonstrates debugging techniques and defensive programming

- **Python:** `task4_debugging.py`
- **C++:** `task4_debugging.cpp`
- **Rust:** `task4_debugging.rs`

**Features:**
- Fixed buggy division function
- Implements safe division with zero-checking
- Demonstrates defensive programming practices
- Interactive division calculator
- Comprehensive error handling

## Technical Implementation Details

### Programming Concepts Demonstrated

1. **Decision Logic:**
   - `if`, `elif`/`else if`, `else` statements
   - Boolean logic and comparisons
   - Conditional expressions

2. **Loops:**
   - `for`/`while` loops
   - Nested loop structures
   - Loop control and iteration

3. **Control Flow:**
   - `break` statements
   - `continue` statements
   - Loop termination strategies

4. **Error Handling:**
   - `try-except`/`try-catch`/`Result` handling
   - Input validation
   - Defensive programming

5. **Functions:**
   - Function definitions with type hints/annotations
   - Return values and parameters
   - Main function pattern

### Code Quality Features

- **Type Hints/Annotations:** All functions include proper type annotations (where supported)
- **Docstrings/Comments:** Comprehensive documentation for all functions
- **Error Handling:** Robust input validation and exception handling
- **User Experience:** Clear prompts and informative error messages
- **Code Organization:** Clean, readable code structure

## Running the Programs

### Prerequisites
- Python 3.6 or higher
- C++ compiler (e.g., g++)
- Rust toolchain (cargo/rustc)

### Execution
Each task can be run independently in any of the three languages:

#### Python
```bash
python task1_decision_logic.py
python task2_loops.py
python task3_breaks.py
python task4_debugging.py
```

#### C++
```bash
g++ -o task1_decision_logic task1_decision_logic.cpp
./task1_decision_logic

g++ -o task2_loops task2_loops.cpp
./task2_loops

g++ -o task3_breaks task3_breaks.cpp
./task3_breaks

g++ -o task4_debugging task4_debugging.cpp
./task4_debugging
```

#### Rust
```bash
rustc task1_decision_logic.rs -o task1_decision_logic_rs
./task1_decision_logic_rs

rustc task2_loops.rs -o task2_loops_rs
./task2_loops_rs

rustc task3_breaks.rs -o task3_breaks_rs
./task3_breaks_rs

rustc task4_debugging.rs -o task4_debugging_rs
./task4_debugging_rs
```

### Testing
All programs include built-in error handling and validation:
- Invalid input detection
- Range checking where applicable
- Graceful error messages
- User-friendly prompts

## Submission Notes

- All files must remain in the root directory when submitting
- Ensure all source files have the correct student ID (A00167472)
- Programs are designed to be self-contained with no external dependencies
- Each task demonstrates specific programming concepts as required

## Learning Objectives Achieved

This assessment successfully demonstrates:
- Understanding of basic programming syntax and control structures in Python, C++, and Rust
- Ability to implement decision logic and conditional statements
- Proficiency with loop constructs and iteration
- Knowledge of control flow mechanisms
- Debugging skills and defensive programming practices
- Code organization and documentation standards

---

**Note:** This README provides comprehensive documentation for the ISE102 Assessment 1 submission. All code is original work demonstrating fundamental programming concepts in Python, C++, and Rust. 