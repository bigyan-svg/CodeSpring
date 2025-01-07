def is_armstrong_number(num):
    # Convert the number to string to calculate its digits
    num_str = str(num)
    n = len(num_str)  # Find the number of digits
    sum_of_powers = sum(int(digit) ** n for digit in num_str)  # Calculate the sum of digits raised to the power n
    
    # Check if the sum of powers is equal to the number
    return sum_of_powers == num

# Input from the user
number = int(input("Enter a number to check if it's an Armstrong number: "))

# Check and display the result
if is_armstrong_number(number):
    print(f"{number} is an Armstrong number.")
else:
    print(f"{number} is not an Armstrong number.")
