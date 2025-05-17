import turtle

# Utility function to move to the right after each letter
def move_right(t, distance=40):
    t.penup()
    t.setheading(45)
    t.forward(distance)
    t.pendown()

def skip(t, distance):
    t.penup()
    t.forward(distance)
    t.pendown()

def draw_a(t):
    t.setheading(75)
    t.pendown()
    t.forward(60)
    t.right(150)
    t.forward(60)
    t.backward(30)
    t.right(105)
    t.forward(20)
    t.penup()
    move_right(t)

def draw_b(t):
    t.left(90)
    t.forward(50)
    for _ in range(2):
        t.right(90)
        t.circle(-10, 180)
    t.penup()
    t.home()
    move_right(t)

def draw_c(t):
    t.penup()
    t.forward(20)
    t.left(90)
    t.pendown()
    t.circle(20, 315)
    t.penup()
    t.home()
    move_right(t)

def draw_d(t):
    t.left(90)
    t.forward(50)
    t.right(90)
    t.circle(-25, 180)
    t.penup()
    t.home()
    move_right(t)

def draw_e(t):
    t.forward(30)
    t.backward(30)
    t.right(90)
    t.forward(25)
    t.left(90)
    t.forward(20)
    t.backward(20)
    t.right(90)
    t.forward(25)
    t.left(90)
    t.forward(30)
    t.penup()
    t.home()
    move_right(t)

def draw_f(t):
    t.forward(30)
    t.backward(30)
    t.right(90)
    t.forward(25)
    t.left(90)
    t.forward(20)
    t.penup()
    t.home()
    move_right(t)

def draw_g(t):
    t.penup()
    t.forward(20)
    t.pendown()
    t.circle(20, 270)
    t.forward(10)
    t.left(90)
    t.forward(10)
    t.penup()
    t.home()
    move_right(t)

def draw_h(t):
    t.left(90)
    t.forward(50)
    t.backward(25)
    t.right(90)
    t.forward(30)
    t.left(90)
    t.forward(25)
    t.backward(50)
    t.penup()
    t.home()
    move_right(t)

def draw_i(t):
    t.forward(20)
    t.backward(10)
    t.right(90)
    t.forward(50)
    t.left(90)
    t.forward(10)
    t.backward(20)
    t.penup()
    t.home()
    move_right(t)

def draw_j(t):
    t.forward(20)
    t.backward(10)
    t.right(90)
    t.forward(50)
    t.left(90)
    t.circle(10, 180)
    t.penup()
    t.home()
    move_right(t)

def draw_k(t):
    t.left(90)
    t.forward(50)
    t.backward(25)
    t.right(45)
    t.forward(35)
    t.backward(35)
    t.right(90)
    t.forward(35)
    t.penup()
    t.home()
    move_right(t)

def draw_l(t):
    t.left(90)
    t.forward(50)
    t.backward(50)
    t.right(90)
    t.forward(30)
    t.penup()
    t.home()
    move_right(t)

def draw_m(t):
    t.left(90)
    t.forward(50)
    t.right(135)
    t.forward(35)
    t.left(90)
    t.forward(35)
    t.right(135)
    t.forward(50)
    t.penup()
    t.home()
    move_right(t)

def draw_n(t):
    t.left(90)
    t.forward(50)
    t.right(150)
    t.forward(58)
    t.left(150)
    t.forward(50)
    t.penup()
    t.home()
    move_right(t)

def draw_o(t):
    t.penup()
    t.forward(20)
    t.left(90)
    t.pendown()
    t.circle(20)
    t.penup()
    t.home()
    move_right(t)

def draw_p(t):
    t.left(90)
    t.forward(50)
    t.right(90)
    t.circle(-10, 180)
    t.penup()
    t.home()
    move_right(t)

def draw_q(t):
    t.penup()
    t.forward(20)
    t.left(90)
    t.pendown()
    t.circle(20)
    t.right(45)
    t.forward(15)
    t.penup()
    t.home()
    move_right(t)

def draw_r(t):
    t.left(90)
    t.forward(50)
    t.right(90)
    t.circle(-10, 180)
    t.left(135)
    t.forward(30)
    t.penup()
    t.home()
    move_right(t)

def draw_s(t):
    t.penup()
    t.forward(20)
    t.pendown()
    t.circle(10, 180)
    t.circle(-10, 180)
    t.penup()
    t.home()
    move_right(t)

def draw_t(t):
    t.forward(30)
    t.backward(15)
    t.right(90)
    t.forward(50)
    t.penup()
    t.home()
    move_right(t)

def draw_u(t):
    t.left(90)
    t.forward(50)
    t.backward(50)
    t.circle(20, 180)
    t.forward(50)
    t.penup()
    t.home()
    move_right(t)

def draw_v(t):
    t.left(75)
    t.forward(50)
    t.backward(50)
    t.right(150)
    t.forward(50)
    t.penup()
    t.home()
    move_right(t)

def draw_w(t):
    t.left(90)
    t.forward(50)
    t.right(135)
    t.forward(35)
    t.left(90)
    t.forward(35)
    t.right(135)
    t.forward(50)
    t.penup()
    t.home()
    move_right(t)

def draw_x(t):
    t.left(60)
    t.forward(58)
    t.backward(29)
    t.right(120)
    t.forward(29)
    t.backward(58)
    t.penup()
    t.home()
    move_right(t)

def draw_y(t):
    t.left(60)
    t.forward(30)
    t.backward(30)
    t.right(120)
    t.forward(30)
    t.backward(30)
    t.left(60)
    t.forward(30)
    t.penup()
    t.home()
    move_right(t)

def draw_z(t):
    t.forward(30)
    t.right(135)
    t.forward(42)
    t.left(135)
    t.forward(30)
    t.penup()
    t.home()
    move_right(t)

# Optional test block
if __name__ == "__main__":
    t = turtle.Turtle()
    t.speed(1)
    for func in [
        draw_a, draw_b, draw_c, draw_d, draw_e, draw_f, draw_g,
        draw_h, draw_i, draw_j, draw_k, draw_l, draw_m, draw_n,
        draw_o, draw_p, draw_q, draw_r, draw_s, draw_t, draw_u,
        draw_v, draw_w, draw_x, draw_y, draw_z
    ]:
        func(t)
    turtle.done()
