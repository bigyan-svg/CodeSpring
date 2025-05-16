import turtle
t= turtle.Turtle()
list_of_colors = ["purple", "red", "orange", "blue", "green"]
for i in range(500):
    t.color(list_of_colors[i%5])
    t.pensize(i/10+1)
    t.forward(i)
    t.left(59)
turtle.mainloop()

# 5.Make a more general version of circle called arc that takes an additional parameter
#  angle, which determines what fraction of a circle to draw. angle is in units of degrees,
#  so when angle=360, arc should draw a complete circle.
# import turtle
# def arc(t, radius, angle):
#     # Calculate arc length
#     arc_length = 2 * 3.14159 * radius * abs(angle) / 360
#     # Number of segments to approximate the arc
#     n = int(arc_length / 4) + 1  # segment length ~4
#     step_length = arc_length / n
#     step_angle = angle / n

#     # Turn slightly left to smooth the start
#     t.left(step_angle / 2)
#     for _ in range(n):
#         t.forward(step_length)
#         t.left(step_angle)
#     t.right(step_angle / 2)

# # Example usage:
# bob = turtle.Turtle()
# bob.speed(0)
# arc(bob, 120, 360)  # Draws a semicircle
# # arc(bob, 50, 360)   # Draws a full circle of radius 50
# turtle.done()

# 4.Write a function called circle that takes a turtle, t, and radius, r, as parameters and
#  that draws an approximate circle by calling square with an appropriate length and
#  number of sides. Test your function with a range of values of r.
#  Hint: figure out the circumference of the circle and make sure that length * n =
#  circumference.
# import turtle
# def square(t, length, n):
#     for _ in range(n):
#         t.forward(length)
#         t.left(360 / n)

# def circle(t, r):
#     circumference = 2 * 3.14159 * r
#     n = int(circumference / 4) + 1  # segment length ~4
#     length = circumference / n
#     square(t, length, n)

# # Test the circle function with different radii
# bob = turtle.Turtle()
# bob.speed(0)
# circle(bob, 50)
# bob.penup()
# turtle.done
# turtle.mainloop()

# 3.Make a copy of square and change the name to square. Add another parameter
#  named n and modify the body so it draws an n-sided regular square. Hint: The
#  exterior angles of an n-sided regular square are 360/n degrees.
# import turtle
# bob = turtle.Turtle()
# bob.speed(10)
# def square(t,length,n):
#     for _ in range (n):
#         t.fd(length)
#         t.lt(360/n)
# square(bob,100,5)
# bob.hideturtle()
# turtle.mainloop()

# 2. Addanother parameter, named length, to square. Modify the body so length of the
#  sides is length, and then modify the function call to provide a second argument. Run
#  the program again. Test your program with a range of values for length.
# import turtle
# bob = turtle.Turtle()
# bob.speed(10)
# def square(t,length):
#     for _ in range (4):
#         t.fd(length)
#         t.lt(90)
# square(bob,100)
# bob.hideturtle()
# turtle.mainloop()

# 1.Write a function call that passes bob as an argument to square, and then run the
#  program again.
# import turtle
# bob = turtle.Turtle()
# bob.speed(10)
# def square(t):
#     for _ in range (4):
#         t.fd(100)
#         t.lt(90)
# square(bob)
# bob.hideturtle()
# turtle.mainloop()