# 1. Draw a stack diagram that shows the state of the program while executing circle(bob,
#  radius). You can do the arithmetic by hand or add print statements to the code.
#  solution
# ------------------------------------------
# | Function: polyline                     |
# | t = bob                                |
# | n = 86                                 |
# | length = 7.31                          |
# | angle = 4.19                           |
# ------------------------------------------
# | Function: arc                          |
# | t = bob                                |
# | r = 100                                |
# | angle = 360                            |
# | arc_length = 628.32                    |
# | n = 86                                 |
# | step_length = 7.31                     |
# | step_angle = 4.19                      |
# ------------------------------------------
# | Function: circle                       |
# | t = bob                                |
# | r = 100                                |
# ------------------------------------------
# | Main program (global frame)            |
# | bob = <Turtle object>                  |
# | radius = 100                           |
# ------------------------------------------


# write an appropriately general set of functions that can draw flowers as in Figure 4.1.
#  Solution:
#  https://thinkpython.com/code/flower.py, also requires https:
#  //thinkpython.com/code/polygon.py.
# """This module contains a code example related to

# Think Python, 2nd Edition
# by Allen Downey
# http://thinkpython2.com

# Copyright 2015 Allen Downey

# License: http://creativecommons.org/licenses/by/4.0/
# """

# from __future__ import print_function, division

# import turtle

# from polygon import arc


# def petal(t, r, angle):
#     """Draws a petal using two arcs.

#     t: Turtle
#     r: radius of the arcs
#     angle: angle (degrees) that subtends the arcs
#     """
#     for i in range(2):
#         arc(t, r, angle)
#         t.lt(180-angle)


# def flower(t, n, r, angle):
#     """Draws a flower with n petals.

#     t: Turtle
#     n: number of petals
#     r: radius of the arcs
#     angle: angle (degrees) that subtends the arcs
#     """
#     for i in range(n):
#         petal(t, r, angle)
#         t.lt(360.0/n)


# def move(t, length):
#     """Move Turtle (t) forward (length) units without leaving a trail.
#     Leaves the pen down.
#     """
#     t.pu()
#     t.fd(length)
#     t.pd()


# bob = turtle.Turtle()

# # draw a sequence of three flowers, as shown in the book.
# move(bob, -100)
# flower(bob, 7, 60.0, 60.0)

# move(bob, 100)
# flower(bob, 10, 40.0, 80.0)

# move(bob, 100)
# flower(bob, 20, 140.0, 20.0)

# bob.hideturtle()
# turtle.mainloop()


# Write an appropriately general set of functions that can draw shapes as in igure 4.2.
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


# def draw_pie(t, n, r):
#     """Draws a pie, then moves into position to the right.

#     t: Turtle
#     n: number of segments
#     r: length of the radial spokes
#     """
#     polypie(t, n, r)
#     t.pu()
#     t.fd(r*2 + 10)
#     t.pd()


# def polypie(t, n, r):
#     """Draws a pie divided into radial segments.

#     t: Turtle
#     n: number of segments
#     r: length of the radial spokes
#     """
#     angle = 360.0 / n
#     for i in range(n):
#         isosceles(t, r, angle/2)
#         t.lt(angle)


# def isosceles(t, r, angle):
#     """Draws an icosceles triangle.

#     The turtle starts and ends at the peak, facing the middle of the base.

#     t: Turtle
#     r: length of the equal legs
#     angle: half peak angle in degrees
#     """
#     y = r * math.sin(angle * math.pi / 180)

#     t.rt(angle)
#     t.fd(r)
#     t.lt(90+angle)
#     t.fd(2*y)
#     t.lt(90+angle)
#     t.fd(r)
#     t.lt(180-angle)


# bob = turtle.Turtle()

# bob.pu()
# bob.bk(130)
# bob.pd()

# # draw poly-pies with various number of sides
# size = 40
# draw_pie(bob, 5, size)
# draw_pie(bob, 6, size)
# draw_pie(bob, 7, size)
# draw_pie(bob, 8, size)

# bob.hideturtle()
# turtle.mainloop()

"""This module contains a code example related to

Think Python, 2nd Edition
by Allen Downey
http://thinkpython2.com

Copyright 2015 Allen Downey

License: http://creativecommons.org/licenses/by/4.0/
"""

from __future__ import print_function, division

import string
import turtle

"""
To use this typewriter, you have to provide a module named letters.py
that contains functions with names like draw_a, draw_b, etc.
"""

# check if the reader has provided letters.py
try:
    import letters
except ImportError as e:
    message = e.args[0]
    if message.startswith('No module'):
        raise ImportError(message + 
                          '\nYou have to provide a module named letters.py')


def teleport(t, x, y):
    """Moves the turtle without drawing a line.

    Postcondition: pen is down

    t: Turtle
    x: coordinate
    y: coordinate
    """
    t.pu()
    t.goto(x, y)
    t.pd()


def keypress(char):
    """Handles the event when a user presses a key.

    Checks if there is a function with the right name; otherwise
    it prints an error message.

    char: string, letter to draw
    """
    # if we're still drawing the previous letter, bail out
    if bob.busy:
        return
    else:
        bob.busy = True

    # figure out which function to call, and call it
    try:
        name = 'draw_' + char
        func = getattr(letters, name)
    except AttributeError:
        print("I don't know how to draw an", char)
        bob.busy = False
        return

    func(bob)

    letters.skip(bob, size/2)
    bob.busy = False


def carriage_return():
    """Moves to the beginning of the next line.
    """
    teleport(bob, -180, bob.ycor() - size*3)
    bob.busy = False


def presser(char):
    """Returns a function object that executes keypress.

    char: character to draw when the function is executed

    returns: function with no arguments
    """
    def func():
        keypress(char)
    return func


# create and position the turtle
size = 20
bob = turtle.Turtle()
bob.busy = False
teleport(bob, -180, 150)

# tell world to call keypress when the user presses a key
screen = bob.getscreen()

for char in string.ascii_lowercase:
    screen.onkey(presser(char), char)

screen.onkey(carriage_return, 'Return')

screen.listen()
turtle.mainloop()