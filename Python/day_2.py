# # Chapter 4: Case Study: Interface Design
# # 1. The turtle module
import turtle
# import turtle     # this is a standard library which imports the turtle module
# # 2. The turtle module provides turtle graphics primitives in both object-oriented and procedure-oriented ways.
# bob = turtle.Turtle()  # create a turtle named bob. small t provides the function and capital T provides the object
# bob.shape("turtle")  # set the shape of the turtle to a turtle
# bob.speed(1)  # set the speed of the turtle to 1 (slowest)
# bob.color("blue")  # set the color of the turtle to blue
# for i in range(4):
#     bob.fd(100)
#     bob.lt(90)
# print(bob)
# turtle.mainloop() # this is a standard library which keeps the window open

# 1. writ a function called the parameter named t, which is a turtle. It should use the turtle to draw a square.
# write a function call that passes bob as an argument to square, and then run thr program again.
# import turtle
# bob = turtle.Turtle()  # create a turtle named bob. small t provides the function and capital T provides the object
# bob.speed(1)  # set the speed of the turtle to 1 (slowest)
# bob.shape("turtle")
# def square(t):
#     for i in range(4):
#         t.fd(100)
#         t.lt(90)
# square(bob)
# turtle.mainloop() # this is a standard library which keeps the window open  

# 2. Add another parameter, named length, to square. Modify the body so length of side is length, and then modify the function call to provide a second argument. Run the program again. Test your program with a range of values for length.

# bob = turtle.Turtle()  # create a turtle named bob. small t provides the function and capital T provides the object
# bob.speed(1)  # set the speed of the turtle to 1 (slowest)
# bob.shape("turtle")
# def square(t, length):
#     for i in range(4):
#         t.fd(length)
#         t.lt(90)
# square(bob, 50)
# turtle.mainloop() # this is a standard library which keeps the window open
 
# 3. Make a copy of the square function and rename it to polygon. Add a parameter named n, which is the number of sides. Modify the body so that it draws a regular polygon with n sides, each of length length. Test your program with a range of values for n and length.
#the exterior angle of a polygon is 360/n
# bob = turtle.Turtle()  # create a turtle named bob. small t provides the function and capital T provides the object
# bob.speed(1)  # set the speed of the turtle to 1 (slowest)
# bob.shape("turtle")
# bob.color("blue")
# def polygon(t, length, n):
#     t.begin_fill()
#     for i in range(n):
#         t.fd(length)
#         t.lt(360/n)
#     t.end_fill()
# polygon(bob, 50, 5)
# turtle.mainloop() # this is a standard library which keeps the window open

# 4. Write a function called circle that takes a turtle ,t, and radius, r, as parameters and that draws an approximate circle by calling polygon with an appropriate length and number of sides. The formula for the circumference of a circle is 2πr, so the length of each side of the polygon should be 2πr/n, where n is the number of sides. The number of sides . Test your function with a range of values for r.
bob = turtle.Turtle()  # create a turtle named bob. small t provides the function and capital T provides the object
bob.speed(1)  # set the speed of the turtle to 1 (slowest)
bob.shape("turtle")
bob.color("red")
bob.fillcolor("blue")
import math
def circle(t, r):
    n = 100
    length = 2 * math.pi * r / n
    t.begin_fill()
    for i in range(n):
        t.fd(length)
        t.lt(360/n)
    t.end_fill()
circle(bob, 50)
turtle.mainloop() # this is a standard library which keeps the window open