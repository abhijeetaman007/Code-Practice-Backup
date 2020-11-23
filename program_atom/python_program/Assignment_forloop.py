#To check for prime number
'''
x=int(input("Enter a Number"))
flag=0
for e in range(2,x,1):
    if(x%e==0):
        flag=1
        print("Not a prime a number")
        break
if(flag==0):
    print("%d is a prime number"%x)
'''
#To find next prime number of a given number
'''
x=int(input("Enter a number"))
x=x+1
while True:
    f=0
    for e in range(2,x,1):
        if(x%e==0):
            f=1
            break
    if f==0:
        print("Required prime number is",x)
        break
    x=x+1
'''
#To print first n prime Number
'''
count=0
n=int(input("Enter N"))
x=2
while count<n:
    flag=0
    for e in range(2,x,1):
        if(x%e==0):
            flag=1
            break
    if flag==0:
        count+=1
        print(x)
    x=x+1
'''
#To find all prime number between two numbers
'''
a=int(input("Enter number"))
b=int(input("Enter number"))
x=a
while x<=b:
    flag=0
    for i in range(2,x,1):
        if x%i==0:
            flag=1
            break
    if flag==0:
        print(x)
    x=x+1
'''
#To check whether two number are co-prime or not
'''
a=int(input("Enter number"))
b=int(input("Enter number"))
flag=1
for i in range(2,a+1,1):
    if b%i==0:
        print("Not co-prime")
        flag=0
        break
if flag==1:
    print("Numbers are co-prime")
'''
#To print n odd number in reverse order
'''
count=0
n=int(input("Enter Number"))
for i in range(2*n-1,0,-2):
    if count<=n:
        count+=1
        print(i)
'''
#To print n even number in reverse order
'''
count=0
n=int(input("Enter Number"))
for i in range(2*n,-1,-2):
    if count<=n:
        count+=1
        print(i)
'''
#To print all prime factors of a given number
'''
n=int(input("Enter Number"))
x=2
while x<=n:
    flag=0
    for i in range(2,x,1):
        if x%i==0:
            flag=1
            break
    if flag==0:
     if n%x==0:
      print(x)
    x=x+1
'''
#To find LCM
