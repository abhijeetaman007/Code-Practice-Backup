#To get all function in math
'''import math
help(math)'''
#Add two number
'''
x=input("Enter First Number")
y=input("Enter Second Number")
print(int(x)+int(y))
'''
#Area of Circle
'''
from math import *
r=input("Enter Radius")
a=pi*int(r)*int(r)
print(a)
'''
#Volume of cuboid
'''
l=input("length")
b=input("breadth")
h=input("height")
print(float(l)*float(b)*float(h))
'''
#Simple Intrest
'''
p=input("Principal")
r=input("Rate")
t=input("Time")
si=(int(p)*float(r)*float(t))/100
print(si)
'''
#Square of Number
'''
x=input("Enter Number")
print(int(x)**2)
'''
#Area of triangle
'''
from math import *
a=input("First Side")
b=input("Second Side")
c=input("Third Side")
s=(int(a)+int(b)+int(c))/2
print("S is",s)
print(type(s))
print("Sqrt of s is",sqrt(s))
area=sqrt(s*(s-int(a))+s*(s-int(b))+s*(s-int(c)))
print("Area is",area)
'''
x=20
y=30
print("x is %d"%x)
print("x is %a"%x)
print("x is",x,"y is",y)
print("x is{} y is{}".format(x,y))
