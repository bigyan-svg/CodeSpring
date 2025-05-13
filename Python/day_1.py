import math  # Import math module at the top

print("Hello World!")
print(2+2)
print(9) #this is because 09 is not a valid integer literal in Python
print(23)

# Starting python as a calculator
# first we write a program that counts how many seconds are there in 42 minutes
minutes =42
seconds = minutes *60
print(seconds)
# how many miles are there in 10 kilometers
kilometers = 10
miles = kilometers * 0.621371
print(miles)

# if you run a 10 kilometer race in 42 minutes 42 seconds, what is your average pace(time per mile in minutes and seconds)? what is your average speed in miles per hour?
# first we need to convert 42 minutes and 42 seconds into seconds
minutes = 42
seconds = 42 
total_seconds = (minutes * 60) + seconds
# now we need to convert 10 kilometers into miles
kilometers = 10
miles = kilometers * 0.621371
# now we need to calculate the average pace in minutes and seconds
average_pace_seconds = total_seconds / miles
average_pace_minutes = average_pace_seconds / 60 # here / is the division operator which returns a float if we want to get the integer part we can use // operator
average_pace_seconds = average_pace_seconds % 60
print("Average pace in minutes:", average_pace_minutes, "\nAverage pace in seconds:", average_pace_seconds)
# now we need to calculate the average speed in miles per hour
average_speed_mph = miles / (total_seconds / 3600)
print("Average speed in miles per hour:", average_speed_mph)

# ORDER OF OPERATIONS USING PEDMAS RULE WHERE P = PARENTHESES, E = EXPONENTS, D = DIVISION, M = MULTIPLICATION, A = ADDITION, S = SUBTRACTION
print((1+1)**(5-2)) # this is the same as (1+1)^(5-2) = 2^3 = 8 # parentheses has the highest precedence
print(1+2**3) # exponent has the next highest precedence ,this is the same as 1+2^3 = 1+8 = 9, here we do not use ^ is is used as bitwise XOR operator in python
print(1+2*3, 6+4//2) # multiplication and division has(same) the next highest precedence, this is the same as 1+2*3 = 1+6 = 7 , operators are evaluated from left to right
print(1+2-3) # addition and subtraction has the same precedence, this is the same as 1+2-3 = 3-3 = 0, operators are evaluated from left to right

#string operations
print("Hello "+"World") # this is the same as "Hello "+" "+"World" = "Hello World"
print("Spam "*3) # this is the same as "Spam "+"Spam "+"Spam " = "Spam Spam Spam"
print (type("Hello")) # this is the same as type("Hello") = <class 'str'>, this is a string

# 42 = n # this is a syntax error, we cannot assign a value to a literal
n = 42 # this is a valid assignment
x=y=1 # this is a valid assignment, this is the same as x=1 and y=1

print(x); # here ; is not required but it is used to separate multiple statements on the same line. it does not have any effect on the output
#what if i put a period at the end of the line
# print(x). # this will give a syntax error, because we cannot put a period at the end of the line
# what if i try multiply x and y like xy
# print(xy) # this will give a syntax error, because we cannot use xy as a variable name, it is not defined
print(x*y) # this does not give a syntax error, because we are using x and y as variable names, it is the same as 1*1 = 1


# 1. The volume of a sphere with radius r is given by the formula V = 4/3 * pi * r^3. What is the volume of a sphere with radius 5?
radius = 5
volume = (4/3) * math.pi * (radius*radius*radius)
print("The volume of a sphere with radius ", radius, "is ", volume)

# 2. Suppose the cover price of a book is $24.95, but bookstores get a 40% discount. Shipping costs $3 for the first copy and 75 cents for each additional copy. What is the total cost of 60 copies?
cover_price = 24.95
discount = 0.4
shipping_cost_first_copy = 3
shipping_cost_additional_copies = 0.75
number_of_copies = 60
discount_price = cover_price * (1-discount)
shipping_cost = shipping_cost_first_copy + (shipping_cost_additional_copies * (number_of_copies - 1))
total_cost = (discount_price* number_of_copies)+shipping_cost
print("The total cost of ", number_of_copies, "copies is ", total_cost)


# 3. If I leave my house at 6:52 AM and run 1 mile at an average pace of 8 minutes and 15 seconds per mile, then 3 miles at tempo of 7 minutes and 12 seconds per mile, and 1 mile at a pace of 8 minutes and 15 seconds per mile, what time do I get home for breakfast?
# first we need to convert the time into seconds
leave_time = 6*60*60 + 52*60     # this is the same as 6*3600 + 52*60 = 24720 seconds
# now we need to convert the pace into seconds
pace_1 = 8*60 + 15         # this is the same as 8*60 + 15 = 495 seconds
pace_2 = 7*60 + 12         # this is the same as 7*60 + 12 = 432 seconds
pace_3 = 8*60 + 15         # this is the same as 8*60 + 15 = 495 seconds
# now we need to calculate the total time taken
total_time = pace_1 + (3 * pace_2) + pace_3
# now we need to convert the total time into hours, minutes and seconds
total_time_hours = total_time // 3600
total_time_minutes = (total_time % 3600) // 60
total_time_seconds = total_time % 60
# now we need to convert the leave time into hours, minutes and seconds
leave_time_hours = leave_time // 3600
leave_time_minutes = (leave_time % 3600) // 60
leave_time_seconds = leave_time % 60
# now we need to calculate the arrival time
arrival_time_seconds = leave_time_seconds + total_time_seconds
arrival_time_minutes = leave_time_minutes + total_time_minutes
arrival_time_hours = leave_time_hours + total_time_hours
# now we need to convert the arrival time into hours, minutes and seconds
arrival_time_seconds = arrival_time_seconds % 60
arrival_time_minutes = arrival_time_minutes + (arrival_time_seconds // 60)
arrival_time_hours = arrival_time_hours + (arrival_time_minutes // 60)
arrival_time_minutes = arrival_time_minutes % 60
arrival_time_hours = arrival_time_hours % 24 # this gives the time in 24 hour format
print("The arrival time is ", arrival_time_hours, ":", arrival_time_minutes, ":", arrival_time_seconds)

#function
print(type(1))  #here print takes a single argument and prints its value in terms of its type this is also called return value 
#print(int('abc')) # this will give a value error because we cannot convert a string to an integer if it is not a valid integer
print(int(1.5)) # this will not give a value error because we can convert a float to an integer

print(type(str(32))) # this will give <class 'str'> because we are converting an integer to a string
print(str(32)) # this will give '32' because we are converting an integer to a string


signal_power = 10  # Example value for signal power
noise_power = 2    # Example value for noise power
ratio  = signal_power // noise_power 
decibels = 10 * math.log10(ratio)
print(decibels) # this will give the value of decibels in terms of signal power and noise power

# radian = 0.7
# height = math.sin(radian)
# print(height) # this will give the value of height in terms of radian

degree = 45
radian = degree/180 * math.pi # this is the same as degree/180 * pi = 0.7853981633974483
print(math.sin(radian)) # this will give the value of sin in terms of radian

print(math.sqrt(2)/2)

#user defined function
def print_lyrics():     # function header, rest of the code is function body
    print("I'm a lumberjack, and I'm okay.")
    print("I sleep all night and I work all day.")
    print("He's a lumberjack, and he's okay.")
    print("He sleeps all night and he works all day.")
    print(type(print_lyrics)) # this will give the type of print_lyrics in terms of its type

# Call the function to see its output
print_lyrics()
