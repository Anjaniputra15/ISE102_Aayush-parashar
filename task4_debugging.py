# ISE102 Assessment 1
# Student: Aayush Parashar  |  ID: A00167472
# Task 4 – Code Debugging

"""Program: safe_division.py
Description: Fixes bugs in a provided 'safe_divide' function.
"""

# ----- Start original buggy code -----
# def safe_divide(a, b):
#     if b = 0:
#         return None
#     return a / b
#
# print(safe_divide("10", 2))
# ----- End original buggy code -----

def safe_divide(a: float, b: float) -> float | None:
    """Divide a by b, returning None if b is zero."""
    if b == 0:
        return None
    return a / b

def main() -> None:
    print("Division utility. Enter 'q' to quit.")
    while True:
        first = input("First number: ")
        if first.lower() == 'q':
            break
        second = input("Second number: ")
        if second.lower() == 'q':
            break
        try:
            num1 = float(first)
            num2 = float(second)
            result = safe_divide(num1, num2)
            if result is None:
                print("Cannot divide by zero.")
            else:
                print(f"{num1} / {num2} = {result}")
        except ValueError:
            print("Please enter valid numbers.")
            continue

if __name__ == "__main__":
    main()
