# # Boolean expressions
# print(type(True))
# print(type(False))
# x = 9
# y = 20
# print(x!=y)
# print(x>y)
# print(x<y)
# print(x>=y)
# print(x<=y)
# print(x==y)

# # logical operators
# print(x<y or x>y)
# print(x<y and x>y)
# print(not(x>y))

# # Conditional Execution 
# if x>=10:
#     print("Max")
# else:
#     if x<10:
#         print("Min")
#     else:
#         print("0")

# #Recursion
# # program to calculate the factorial of a given number
# x=10
# y=20
# print(x,y)
# n = 10
# def factorial(n):
#     if n==0:
#         return 1
#     else:
#         return n * factorial(n-1)
# factorial = factorial(n)
# print("Factorial of",n,"is",factorial)

# # program to print the fibonacci series
# n = 10
# def fibonacci(n):
#     if n == 0:
#         return 0
#     elif n==1:
#         return 1
#     else:
#         return fibonacci(n-1)+fibonacci(n-2)
# for i in range(n):
#     print(fibonacci(i)," ")

# keyboard input
# x = float(input(f"Enter value of x\n "))
# y = float(input(f"Enter value of y\n "))
# print(f"Value of x = {x:02f}")
# print(f"Value of y = {y:02f}")

# To compute signal to noise ratio
# import math
# signal_power = 9
# noise_power = 10
# ratio = signal_power / noise_power
# decibels = 10 * math.log10(ratio)
# print(decibels)

# import time

# # Get the current time in seconds since the epoch
# current_time = time.time()


# # Calculate number of days since epoch
# days_since_epoch = int(current_time // (24 * 60 * 60))

# # Get the time of day in seconds
# seconds_today = int(current_time % (24 * 60 * 60))

# # Convert seconds_today to hours, minutes, seconds
# hours = seconds_today // 3600
# minutes = (seconds_today % 3600) // 60
# seconds = seconds_today % 60

# # Display results
# print(f"Days since epoch: {days_since_epoch}")
# print(f"Current time: {hours:02d}:{minutes:02d}:{seconds:02d}")

# 1. Write a function named check_fermat that takes four parameters—a, b, c and n—and
# checks to see if fermat’s theorem holds. If n is greater than 2 and a^n+b^n=c^n
# the program should print, “Holy smokes, fermat was wrong!” Otherwise the program should
# print, “No, that doesn’t work.”
# def check_fermat(a,b,c,n):
#     if (n>2) and (a**n + b**n == c**n):
#         print("Holy smokes, Fermat was wrong!")
#     else:
#         print("No, that doesn't work.")
# check_fermat(3,4,5,3)


# 2. Write a function that prompt the user to input values for a,b,c and n, converts m to integer and uses check_fermat to check whether they violate Fermat's theoram
# a,b,c,n = map(int, input("Enter values of a,b,c and n ").split())
# def check_fermat(a,b,c,n):
#     if (n==2) and (a**n + b**n == c**n):
#         print("Holy smokes, Fermat was wrong!")
#     else:
#         print("No, that doesn't work.")
# check_fermat(a,b,c,n) 


# 3. Write a function that prompts the user to input three stick lengths, converts them to integers,
# and uses is_triangle to check whether sticks with the given lengths can form a triangle.
# a,b,c = map(int, input("Enter three sides of triangles ").split())
# def is_Triangle():
#     if ((a+b)<=c) or ((b+c)<=a or (c+a)<=b):
#         print("Triangle cannot be formed")
#     else: 
#         print("Triangle can be formed")
# is_Triangle()

#find the output of the following program
# def recurse(n, s):
"""
    Recursively computes the sum of integers from n down to 1, added to an initial value s,
    and prints the final result when n reaches 0.

    Parameters:
        n (int): A non-negative integer that controls the depth of recursion.
        s (int): The initial sum value to which numbers from n to 1 will be added.

    Behavior:
        - If n is 0, the function prints the current value of s.
        - Otherwise, it calls itself with (n - 1) and (n + s).

    Example:
        recurse(3, 0) will print 6, because 3 + 2 + 1 + 0 = 6.

    Note:
        This function uses recursion and does not return a value; it prints the result instead.
"""
# def recurse(n, s):
#     if n == 0:
#         print(s)
#     else:
#         recurse(n-1, n+s)
# recurse(10,0)
# #Stack diagram:
# # recurse(0, 6)   ← prints 6
# # recurse(1, 5)
# # recurse(2, 3)
# # recurse(3, 0)


# Koch Curve
# import turtle
# bob = turtle.Turtle()
# bob.pu()
# bob.goto(0,-400)
# bob.pd()
# def draw(t, length, n):
#     if n==0:
#         return
#     angle = 50
#     t.fd(length*n)
#     t.lt(angle)
#     draw(t, length, n-1)
#     t.rt(2*angle)
#     draw(t,length, n-1)
#     t.lt(angle)
#     t.bk(length*n)
# draw(bob, 10, 10)
# turtle.mainloop()
