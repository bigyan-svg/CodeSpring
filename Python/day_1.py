import math  # Import math module at the top

print("Hello World!")
print(2 + 2)
print(9)  # this is because 09 is not a valid integer literal in Python
print(23)

# Starting python as a calculator
# first we write a program that counts how many seconds are there in 42 minutes
minutes = 42
seconds = minutes * 60
print(seconds)

# how many miles are there in 10 kilometers
kilometers = 10
miles = kilometers * 0.621371
print(miles)

# if you run a 10 kilometer race in 42 minutes 42 seconds, what is your average pace (time per mile in minutes and seconds)?
# what is your average speed in miles per hour?
# first we need to convert 42 minutes and 42 seconds into seconds
minutes = 42
seconds = 42
total_seconds = (minutes * 60) + seconds
# now we need to convert 10 kilometers into miles
kilometers = 10
miles = kilometers * 0.621371
# now we need to calculate the average pace in minutes and seconds
average_pace_seconds = total_seconds / miles
average_pace_minutes = average_pace_seconds // 60  # integer division for minutes
average_pace_seconds = average_pace_seconds % 60  # remainder for seconds
print("Average pace in minutes:", average_pace_minutes, "\nAverage pace in seconds:", average_pace_seconds)
# now we need to calculate the average speed in miles per hour
average_speed_mph = miles / (total_seconds / 3600)
print("Average speed in miles per hour:", average_speed_mph)

# ORDER OF OPERATIONS USING PEDMAS RULE WHERE P = PARENTHESES, E = EXPONENTS, D = DIVISION, M = MULTIPLICATION, A = ADDITION, S = SUBTRACTION
print((1 + 1) ** (5 - 2))  # parentheses has the highest precedence
print(1 + 2 ** 3)  # exponent has the next highest precedence
print(1 + 2 * 3, 6 + 4 // 2)  # multiplication and division have the same precedence
print(1 + 2 - 3)  # addition and subtraction have the same precedence

# string operations
print("Hello " + "World")  # string concatenation
print("Spam " * 3)  # string repetition
print(type("Hello"))  # type of a string

# valid assignments
n = 42
x = y = 1  # multiple assignment

print(x)  # prints 1
print(x * y)  # prints 1

# 1. The volume of a sphere with radius r is given by the formula V = 4/3 * pi * r^3.
radius = 5
volume = (4 / 3) * math.pi * (radius ** 3)
print("The volume of a sphere with radius", radius, "is", volume)

# 2. Calculate the total cost of 60 copies of a book
cover_price = 24.95
discount = 0.4
shipping_cost_first_copy = 3
shipping_cost_additional_copies = 0.75
number_of_copies = 60
discount_price = cover_price * (1 - discount)
shipping_cost = shipping_cost_first_copy + (shipping_cost_additional_copies * (number_of_copies - 1))
total_cost = (discount_price * number_of_copies) + shipping_cost
print("The total cost of", number_of_copies, "copies is", total_cost)

# 3. Calculate the arrival time after running
leave_time = 6 * 60 * 60 + 52 * 60  # convert 6:52 AM to seconds
pace_1 = 8 * 60 + 15  # 8 minutes 15 seconds per mile
pace_2 = 7 * 60 + 12  # 7 minutes 12 seconds per mile
pace_3 = 8 * 60 + 15  # 8 minutes 15 seconds per mile
total_time = pace_1 + (3 * pace_2) + pace_3
arrival_time_seconds = leave_time + total_time
arrival_time_hours = (arrival_time_seconds // 3600) % 24
arrival_time_minutes = (arrival_time_seconds % 3600) // 60
arrival_time_seconds = arrival_time_seconds % 60
print("The arrival time is", arrival_time_hours, ":", arrival_time_minutes, ":", arrival_time_seconds)

# function examples
def print_lyrics():
    print("\nI'm a lumberjack, and I'm okay.")
    print("I sleep all night and I work all day.")
    print("He's a lumberjack, and he's okay.")
    print("He sleeps all night and he works all day.")

def repeat_lyrics():
    print_lyrics()
    print_lyrics()

repeat_lyrics()

def print_twice(bruce):
    print(bruce)
    print(bruce)

print_twice("Spam")
print_twice(42)
print_twice(math.pi)
print_twice("Spam " * 4)
print_twice(math.cos(math.pi))

michael = 'Eric, the half a bee'
print_twice(michael)

def cat_twice(part1, part2):
    cat = part1 + part2
    print_twice(cat)

line1 = 'Bing tiddle'
line2 = ' tiddle bang'
cat_twice(line1, line2)

# track back example
def divide(x, y):
    if y == 0:
        print("Error: Division by zero is not allowed.")
        return None
    return x / y

def main():
    result = divide(10, 0)
    if result is not None:
        print(result)

main()


# write a function named right_justify that takes a string named s as a parameter and prints the string with enough leading spaces so that the last letter of the string is in column 70 of the display. >>> right_justify('monty')
def right_justify(s):
    length = len(s)
    spaces = 70 - length
    print(' ' * spaces + s)
right_justify('monty')

# A function object is a value that can be assigned to a variable or passed as an argument. for example, do_twice is a function that takes a function as an argument and calls it twice.
# def do_twice(f):
#     f()
#     f()
# def print_spam():
#     print("Spam")
# do_twice(print_spam)
# 1. type this example into a script and test it
# 2. modify do_twice so that it takes two arguments, a function object and a value, and calls the function twice, passing the value as an argument.
# 3. copy the definition of print_twice from the previous chapter and modify it to use do_twice to print a string twice.
# 4. Use the modified version of do_twice to call print_twice, passing the string 'Spam' as an argument.
# 5. Define a new function called do_four that takes a function object and a value and calls the function four times, passing the value as an argument. Use do_four to call print_twice, passing the string 'Spam' as an argument.
def do_twice(f, value):
    f(value)
    f(value)
def print_twice(s):
    print(s)
    print(s)
do_twice(print_twice, 'Spam')
def do_four(f, value):
    do_twice(f, value)
    do_twice(f, value)
do_four(print_twice, 'Spam')


# Write a function that draws the grid like following
# +----------------+----------------+
# |                |                |
# |                |                |
# |                |                |
# |                |                |
# |                |                |
# +----------------+----------------+
# |                |                |
# |                |                |
# |                |                |
# |                |                |
# |                |                |
# +----------------+----------------+

def draw_grid():
    print("+----------------+----------------+")
    for i in range(5):
        print("|                |                |")
    print("+----------------+----------------+")
    for i in range(5):
        print("|                |                |")
    print("+----------------+----------------+")
draw_grid()



# write a function that draws similar grid with 4 rows and 4 columns
def draw_grid_4x4():
    for i in range(4):
        print("+----+----+----+----+")
        print("|    |    |    |    |")
    print("+----+----+----+----+")
draw_grid_4x4()














