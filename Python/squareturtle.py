import turtle
trtl=turtle.Turtle()
screen=turtle.Screen()
screen.setup(600,500)
screen.bgcolor('black')
trtl.pencolor('red')
trtl.pensize(15)
trtl.speed(1)
trtl.shape('turtle')
trtl.forward(100)
trtl.right(90)
trtl.forward(100)
trtl.right(90)
trtl.forward(100)
trtl.backward(100)
trtl.left(90)
trtl.forward(100)
trtl.right(90)
trtl.forward(100)
trtl.penup()
trtl.setpos(-120,100)
trtl.pendown('blue')
trtl.write('python.hub',font=("Arial",16,"bold"))
trtl.penup()
trtl.ht()