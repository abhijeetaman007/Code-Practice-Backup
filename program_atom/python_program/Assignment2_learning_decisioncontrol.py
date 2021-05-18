#odd even
'''
x=int(input("Enter number"))
if x&1==1:
    print("Number is Odd")
else:
    print("Number is even")
'''
#divisible by 5
'''
x=int(input("Enter number"))
if x%5==0:
    print("divisible by 5")
else:
    print("Not divisible by 5")
'''
#Check for possitive ,Negetive and Zero
'''
x=int(input("Enter Number"))
if x>0:
    print("Number is possitive")
elif x<0:
        print("Number is negetive")
else:
        print("Number is Zero")
'''
'''
#Finding greatest number
x=int(input("Enter Number"))
y=int(input("Enter Number"))
z=int(input("Enter Number"))
if x>y:
    if x>z:
        print("Greatest Number is %d"%x)
    else:
        print("Greatest Number is %d"%z)
elif y>z:
    print("Greatest number is %d"%y)
else:
    print("Greatest number is %d"%z)
'''
#check if year is leap or not
'''
x=int(input("Enter Year"))
if x%100==0:
    if x%400==0:
        print("Year is leap")
    else:
        print("Not a leap year")
else:
    if x%4==0:
        print("Year is leap year")
    else:
        print("Not a leap year")
'''
#Display number of days in month
'''
x=int(input("Enter Month code"))
if x==1:
    print("January")
if x==2:
    print("February")
if x==3:
    print("March")
if x==4:
    print("April")
if x==5:
    print("May")
if x==6:
    print("June")
if x==7:
    print("July")
if x==8:
    print("August")
if x==9:
    print("September")
if x==10:
    print("October")
if x==11:
    print("November")
if x==12:
    print("December")
'''
#To check nature of roots of quadratic equation
'''
a=int(input("Enter a"))
b=int(input("Enter b"))
c=int(input("Enter c"))
d=(b**2)-(4*a*c)
if d==0:
    print("Real and Equal roots")
else:
 if d>0:
    print("Real and unique roots")
 else:
    print("Complex roots")
'''
# to set words in dictionary order
'''
x=input("Enter word")
y=input("Enter word")
z=input("Enter word")
if x>y:
    if x>z:
        if y>z:
            print("Dictionary order is {} {} {}".format(z,y,x))
        else:
            print("Dictionary order is {} {} {}".format(y,z,x))
    else:
        print("Dictionary order is {} {} {}".format(y,x,z))
else:
    if y>z:
        if x>z:
            print("Dictionary order is {} {} {}".format(z,x,y))
        else:
            print("Dictionary order is {} {} {}".format(x,z,y))
    else:
        print("Dictionary order is {} {} {}".format(x,y,z))
'''
#comparing real and imaginary part of complex Number
'''
z=complex(input("Enter a complex number"))
if z.real>z.imag:
    print("Real part of complex number= {} is greater".format(z.real))
else:
    print("Imaginary part of complex number= {} is greater".format(z.imag))
'''
#Result PASS or FAIL for 1 Subject
'''
x=int(input("Enter marks"))
if x>=40:
    print("PASS")
    print("Percentage: %d"%x)
    if x>=70:
        print("Division: First")
    else:
        print("Division: Second")
else:
    print("FAIL")
'''
