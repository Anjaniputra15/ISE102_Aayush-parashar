# ISE102 Assessment 1
# Student: Aayush Parashar  |  ID: A00167472
# Task 1 – Decision Logic

"""Program: ticket_pricing.py
Description: Determine movie ticket price based on age and membership.
"""

def calc_ticket_price(age: int, is_member: bool) -> float:
    """Return ticket price based on simple rules:
    - Children (<=12): $8
    - Seniors (>=65): $10
    - Adults: $15
    Members get 10% off final price.
    """
    if age <= 12:
        price = 8
    elif age >= 65:
        price = 10
    else:
        price = 15

    if is_member:
        price *= 0.9
    return price

def main() -> None:
    try:
        age = int(input("Enter age: "))
        member_input = input("Member (y/n)? ").strip().lower()
        is_member = member_input == 'y'
        cost = calc_ticket_price(age, is_member)
        print(f"Ticket price: ${cost:.2f}")
    except ValueError:
        print("Invalid input: age must be an integer.")

if __name__ == "__main__":
    main()
