import turtle
t= turtle.Turtle()
list_of_colors = ["purple", "red", "orange", "blue", "green"]
for i in range(500):
    t.color(list_of_colors[i%5])
    t.pensize(i/10+1)
    t.fd(i)
    t.lt(59)
turtle.mainloop()

# 5.Make a more general version of circle called arc that takes an additional parameter
#  angle, which determines what fraction of a circle to draw. angle is in units of degrees,
#  so when angle=360, arc should draw a complete circle.
# """This module contains a code example related to

# Think Python, 2nd Edition
# by Allen Downey
# http://thinkpython2.com

# Copyright 2015 Allen Downey

# License: http://creativecommons.org/licenses/by/4.0/
# """

# from __future__ import print_function, division

# import math
# import turtle


# def square(t, length):
#     """Draws a square with sides of the given length.

#     Returns the Turtle to the starting position and location.
#     """
#     for i in range(4):
#         t.fd(length)
#         t.lt(90)


# def polyline(t, n, length, angle):
#     """Draws n line segments.

#     t: Turtle object
#     n: number of line segments
#     length: length of each segment
#     angle: degrees between segments
#     """
#     for i in range(n):
#         t.fd(length)
#         t.lt(angle)


# def polygon(t, n, length):
#     """Draws a polygon with n sides.

#     t: Turtle
#     n: number of sides
#     length: length of each side.
#     """
#     angle = 360.0/n
#     polyline(t, n, length, angle)


# def arc(t, r, angle):
#     """Draws an arc with the given radius and angle.

#     t: Turtle
#     r: radius
#     angle: angle subtended by the arc, in degrees
#     """
#     arc_length = 2 * math.pi * r * abs(angle) / 360
#     n = int(arc_length / 4) + 3
#     step_length = arc_length / n
#     step_angle = float(angle) / n

#     # making a slight left turn before starting reduces
#     # the error caused by the linear approximation of the arc
#     t.lt(step_angle/2)
#     polyline(t, n, step_length, step_angle)
#     t.rt(step_angle/2)


# def circle(t, r):
#     """Draws a circle with the given radius.

#     t: Turtle
#     r: radius
#     """
#     arc(t, r, 360)


# # the following condition checks whether we are
# # running as a script, in which case run the test code,
# # or being imported, in which case don't.

# if __name__ == '__main__':
#     bob = turtle.Turtle()

#     # draw a circle centered on the origin
#     radius = 100
#     bob.pu()
#     bob.fd(radius)
#     bob.lt(90)
#     bob.pd()
#     circle(bob, radius)

#     # wait for the user to close the window
#     turtle.mainloop()


# 4.Write a function called circle that takes a turtle, t, and radius, r, as parameters and
#  that draws an approximate circle by calling square with an appropriate length and
#  number of sides. Test your function with a range of values of r.
#  Hint: figure out the circumference of the circle and make sure that length * n =
#  circumference.
# import turtle
# import math
# def polygon(t, length, n):
#     for _ in range(n):
#         t.fd(length)
#         t.lt(360 / n)

# def circle(t, r):
#     circumference = 2 * math.pi * r
#     n = int(circumference / 4) + 3  # segment length ~4 
#     length = circumference / n
#     polygon(t, length, n)

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

""" 2. Addanother parameter, named length, to square. Modify the body so length of the
sides is length, and then modify the function call to provide a second argument. Run
the program again. Test your program with a range of values for length.
"""
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

























































































