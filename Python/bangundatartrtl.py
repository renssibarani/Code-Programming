import turtle
import time

trtl=turtle=Turtle()
trtl.pencolor('red')
trtl.pensize(5)
trtl.speed(1)
trtl.shape('turtle')
n=3
shapes=['Triangle', 'Square', 'Pentagon', 'Hexagon', 'Heptagon', 'Octagon', 'Nonagon', 'Decagon']
while N<11:
    trtl.clear()
    for i in range(n):
        trtl.pencolor('blue')
        trtl.forward(60)
        trtl.right(360/n)
    n=n+1
    trtl.penup()
    trtl.home()
    trtl.pendown()
    trtl.penup()