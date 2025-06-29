# ISE102 Assessment 1
# Student: Aayush Parashar  |  ID: A00167472
# Task 3 – Breaks & Exits

"""Program: running_average.py
Description: Read numbers until the user enters 'q' or blank line, then print average.
"""

def main() -> None:
    total = 0.0
    count = 0
    while True:
        data = input("Enter number (q to quit): ").strip()
        if data.lower() == 'q' or data == '':
            break
        try:
            num = float(data)
            total += num
            count += 1
        except ValueError:
            print("Invalid number, try again.")
            continue
    if count:
        print(f"Average of {count} numbers is {total / count:.2f}")
    else:
        print("No valid numbers entered.")

if __name__ == "__main__":
    main()
