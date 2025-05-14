import turtle
t= turtle.Turtle()
list_of_colors = ["purple", "red", "orange", "blue", "green"]
for i in range(200):
    t.color(list_of_colors[i%5])
    t.pensize(i/10+1)
    t.forward(i)
    t.left(59)
    
turtle.mainloop()