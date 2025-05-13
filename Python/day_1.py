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