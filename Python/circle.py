import turtle
trtl=turtle.Turtle()
screen=turtle.Screen()
screen.setup(420,320)
screen.bgcolor('pink')
trtl.pencolor('black')
trtl.pensize(15)
trtl.speed(10)
trtl.shape('turtle')
n=0
while n<7:
    n=n+1
    trtl.penup()
    trtl.setpos(0,-n*20)
    trtl.pendown()
    trtl.circle(20*n)

trtl.right(90)
trtl.forward(200)
trtl.right(90)
trtl.forward(10)
trtl.right(90)
trtl.forward(200)
trtl.right(90)
trtl.forward(20)
trtl.right(90)
trtl.forward(200)
trtl.penup()
trtl.setpos(-120,100)
trtl.pendown('blue')
trtl.write('python.hub',font=("Arial",16,"bold"))
trtl.penup()
trtl.ht()