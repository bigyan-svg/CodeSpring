# # function is a block of code that can be called multiple times from different parts of the program to perform a specific task.
# # A function can take arguments (parameters) and return values.
# # Functions are useful for organizing code, reducing repetition, and improving code readability.
# # In Python, functions are defined using the `def` keyword.
# def calcSum(a,b):
#     # This is a comment explaining what the function does
#     # The function takes two arguments, a and b, and returns their sum.
#     sum = a+b
#     print(sum)
#     return sum
    
# # Now we can call the function with arguments and print the result
# calcSum(1,2)
# # Output: 3
# calcSum(2,4)
# # Output: 6
# calcSum(5,9)
# # Output: 14
# def cals_Sum(a,b): #function definition
#     return a+b
# sum = cals_Sum(1,2) #function call; arguments
# print(sum) # Output: 3

# def print_hello():
#     print("Hello, World!")
# output = print_hello()
# print(output) # Output: None
# # Output: Hello, World!

# # average of three numbers
# def calc_average(a,b,c):
#     sum = a+b+c
#     average = sum/3
#     print (average)
#     return average

# calc_average(1,2,3
# def cal_prod(a=2,b=2):
#     product = a*b
#     print (product)
#     return product
# cal_prod()

# cities = ["Tokyo", "New York", "London", "Paris", "Sydney"]
# heros = ["Batman", "Superman", "Spiderman", "Ironman", "Captain America"]


# def print_length(list):
#     print(len(list))
    
# def print_list(list):
#     for item in list:
#         print(item, end=" ")
    
# print_list(heros)
# print(end = "\n")
# print_list(cities)

#program to find the factorial of a number
# def factorial(n):
#     if n == 0:
#         return 1
#     else:
#         return n * factorial(n-1)
#     #test the function
# print(factorial(5)) # Output: 120

# n = int(input("Enter a number: "))
# factorial = 1
# for i in range(1, n + 1):
#     factorial *= i
# print(factorial)

#function to convert USD to INR

# def convert_usd_to_inr(amount):
#     inr = amount * 83
#     print (f"{amount} USD is equal to {inr} INR")
# print(convert_usd_to_inr(100)) # Output: 8300.0

# program to check whether the given number is odd or even
# def check_odd_even(num):
#     if num % 2 == 0:
#         print(f"{num} is even")
#     else:
#         print(f"{num} is odd")
# check_odd_even(10) # Output: 10 is even

# recursion: a function that calls itself
# def show(n):
#     if n == -1 :  # base case
#         return  #control return to the previous function call
#     print(n)
#     show(n-1)
# show (5) # Output: 5 4 3 2 1 0

# call stack: a region of memory where the function calls are stored
# Program to find a factorial of a number using recursion
# def factorial(n): # function definition
#     if (n == 0 or n == 1): # base case
#         return 1 # return 1 when n is 0 or 1
#     else:
#         return n * factorial(n-1) # recursive call to factorial(n-1)
#     # test the function
# print(factorial(200)) # Output: 120
    
        
# Program to calculate thw sum of first n natural numbers using recursion
# def sum_of_natural_numbers(n):
#     if n == 0:
#         return 0
#     else:
#         return n + sum_of_natural_numbers(n-1)
# print(sum_of_natural_numbers(10)) # Output: 55

# #or
# def calc_sum(n):
#     if n == 0:
#         return 0
#     return calc_sum(n-1)+n
# sum = calc_sum(10)
# print(sum) # Output: 55

# write a recusive function to print all elements in a list
# def print_list(list,idx):
#     if idx == len(list):
#         return
#     print(list[idx])
#     print_list(list,idx+1) # recursive call to print_list(list,idx+1)

# fruits = ['apple','banana','cherry']
# print_list(fruits,0) # Output: apple banana cherry







        





    



