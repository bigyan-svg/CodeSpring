# 1. print numbers from 1 to 100
# i = 1
# while  i<= 100:
#     print(i)
#     i += 1

# print("Loop Ended")

# 2. print numbers from 100 to 1

# i = 100
# while i >= 1:  stopping condition
#     print(i)
#     i -= 1
# print("Loop Ended")

# 3. print the multiplication table of number n.

# n = int(input("Enter Number"))
# i = 1
# while i <= 10:
#     print(n,"*",i,"=",n*i)
#     i += 1
# print("Thank You")

#  4. Print the elements of the following list using loop
#    [1,4,9,16,25,36,46,64,81,100] 

# nums = [1,4,9,16,25,36,46,64,81,100]
# i = 0
# while i < len(nums): #traverse: go through each element in list tuple
#     print(nums[i])
#     i +=1
# print("Loop Ended")

# 5. Search for a number x in this tuple using loop
# nums = (1,4,9,16,25,36,46,64,81,100)
# x = int(input("Enter element you want to search"))
# i = 0
# while i < len(nums):
#     if(nums[i] == x):
#         print("Found at index", i)
#     else:
#         print("finding..")
#     i += 1

# Break statement
# nums = (1,4,9,16,25,36,46,64,81,100)
# x = int(input("Enter element you want to search"))
# i = 0
# while i < len(nums):
#     if(nums[i] == x):
#         print("Found at index", i)
#         break
#     else:
#         print("finding..")
#     i += 1
# print("End of loop")

# Continue Statement
# i = 0
# while i <= 5:
#     if(i==3):
#         i += 1
#         continue
#     print(i)
#     i += 1

# Program to skip even number and print odd number
# using continue statement in given range

# i = 1
# while i <= 100:
#     if(i%2 == 0):
#         i +=1
#         continue
#     print(i)
#     i += 1

# Program to skip odd number and print even number
# using continue statement in given range

# i = 1
# while i <= 100:
#     if(i%2 != 0):
#         i +=1
#         continue
#     print(i)
#     i += 1

# for loop
# list = [1,2,3,4,5]

# for i in list:
#     print(i)


# veg = ("potato","bringal","Ladyfinger","cucumber")
# for i in veg:
#     print(i)

# str = "Nepal College Of Information Technology"
# for char in str:
#     if(char == 'o'):
#         print(" o found")
#         break
#     print(char)

# else:
#     print("end")

# Print the elements of the following list using a loop:
# [1,4,9,16,25,36,49,64,81 100]

# num = [1,4,9,16,25,36,49,64,81,100]

# for i in num:
#     print(i)

# Search for a number x in this tuple using loop
# num = [1,4,9,16,25,36,49,64,81,100,1,1]   this is called linear search
# x = int(input("Enter Number you want to search"))
# idx = 0
# for i in num:
#     if(i == x):
#         print("Number found at idx", idx)
#     idx +=1


#Range
# seq = range(5)

# for i in seq:
#     print(i)

# for i in range(2,10):
#     print(i)

#Print the number from 1 to 100
# for i in range(1,101):
#     print(i)

#print th number from 100 to 1
# for i in range(100,0,-1):
#     print(i)

#print the multiplication table of number n

# n = int(input("enter the number: "))

# for i in range(1,11):
#     print(n,"*",i, "=",n*i)

#pass statement

# for i in range(5):
#     pass


# if(i>5):
#     pass
# print("Thankyou")


# Program to print the sum of first n natural numbers using while loop
# n = int(input("Enter number"))
# i = 1
# sum = 0

# while i<=n:
#     sum += i
#     i += 1
# print("The sum is: ",sum)

# Program to find the factorial of first n natural numbers using for loop
n = int(input("Enter the number:"))
fact = 1
for i in range(1,n+1):
    fact *= i
    
print("The Factorial is: ",fact)   