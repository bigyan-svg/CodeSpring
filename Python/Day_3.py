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
"""This module contains a code example related to

Think Python, 2nd Edition
by Allen Downey
http://thinkpython2.com

Copyright 2015 Allen Downey

License: http://creativecommons.org/licenses/by/4.0/
"""

from __future__ import print_function, division

import turtle

from polygon import arc


def petal(t, r, angle):
    """Draws a petal using two arcs.

    t: Turtle
    r: radius of the arcs
    angle: angle (degrees) that subtends the arcs
    """
    for i in range(2):
        arc(t, r, angle)
        t.lt(180-angle)


def flower(t, n, r, angle):
    """Draws a flower with n petals.

    t: Turtle
    n: number of petals
    r: radius of the arcs
    angle: angle (degrees) that subtends the arcs
    """
    for i in range(n):
        petal(t, r, angle)
        t.lt(360.0/n)


def move(t, length):
    """Move Turtle (t) forward (length) units without leaving a trail.
    Leaves the pen down.
    """
    t.pu()
    t.fd(length)
    t.pd()


bob = turtle.Turtle()

# draw a sequence of three flowers, as shown in the book.
move(bob, -100)
flower(bob, 7, 60.0, 60.0)

move(bob, 100)
flower(bob, 10, 40.0, 80.0)

move(bob, 100)
flower(bob, 20, 140.0, 20.0)

bob.hideturtle()
turtle.mainloop()



