# import turtle
# t= turtle.Turtle()
# list_of_colors = ["purple", "red", "orange", "blue", "green"]
# for i in range(500):
#     t.color(list_of_colors[i%5])
#     t.pensize(i/10+1)
#     t.forward(i)
#     t.left(59)
    
import turtle
import math

# Constants for flag proportions (scaled for better appearance)
base_unit = 30
height1 = 8 * base_unit
height2 = 6 * base_unit
width = 7 * base_unit

# Setup screen
screen = turtle.Screen()
screen.title("Nepal National Flag")
screen.bgcolor("white")

# Create main turtle
t = turtle.Turtle()
t.speed(0)
t.pensize(2)
t.hideturtle()

# Helper function
def goto(x, y):
    t.penup()
    t.goto(x, y)
    t.pendown()

# Draw outer blue border
def draw_border():
    t.color("blue")
    t.pensize(5)
    goto(0, 0)
    t.pendown()
    t.begin_fill()
    t.goto(0, height1 + height2)
    t.goto(width, height2)
    t.goto(0, height2)
    t.goto(width, 0)
    t.goto(0, 0)
    t.end_fill()
    t.pensize(2)

# Draw crimson inner area
def draw_inner_flag():
    t.color("crimson")
    goto(7, 7)
    t.begin_fill()
    t.goto(7, height1 + height2 - 7)
    t.goto(width - 7, height2 + 7)
    t.goto(7, height2 - 7)
    t.goto(width - 7, 7)
    t.goto(7, 7)
    t.end_fill()

# Draw crescent moon
def draw_moon():
    moon = turtle.Turtle()
    moon.hideturtle()
    moon.speed(0)
    moon.penup()
    moon.goto(35, height2 + 60)
    moon.pendown()
    moon.color("white")
    moon.begin_fill()
    moon.circle(35)
    moon.end_fill()

    moon.penup()
    moon.goto(45, height2 + 75)
    moon.pendown()
    moon.color("crimson")
    moon.begin_fill()
    moon.circle(35)
    moon.end_fill()

    # Draw small circle for moon face
    moon.penup()
    moon.goto(35, height2 + 80)
    moon.pendown()
    moon.color("white")
    moon.begin_fill()
    moon.circle(15)
    moon.end_fill()

# Draw 12-pointed sun (simplified)
def draw_sun():
    sun = turtle.Turtle()
    sun.hideturtle()
    sun.speed(0)
    sun.penup()
    sun.goto(40, height2 - 100)
    sun.pendown()
    sun.color("white")
    sun.begin_fill()
    for _ in range(12):
        sun.forward(40)
        sun.left(150)
        sun.forward(40)
        sun.right(120)
    sun.end_fill()

# Draw everything
draw_border()
draw_inner_flag()
draw_moon()
draw_sun()

t.hideturtle()
screen.mainloop()