# ISE102 Assessment 1
# Student: Aayush Parashar  |  ID: A00167472
# Task 2 – Loops

"""Program: multiplication_table.py
Description: Print a formatted multiplication table up to N.
"""

def print_table(n: int) -> None:
    for i in range(1, n + 1):
        row = []
        for j in range(1, n + 1):
            row.append(f"{i*j:4}")
        print("".join(row))

def main() -> None:
    try:
        n = int(input("Table size (1‑20): "))
        if not 1 <= n <= 20:
            raise ValueError
        print_table(n)
    except ValueError:
        print("Please enter an integer between 1 and 20.")

if __name__ == "__main__":
    main()
