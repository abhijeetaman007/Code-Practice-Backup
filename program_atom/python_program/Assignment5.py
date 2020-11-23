#Table of n
'''
n=int(input("Enter number"))
t=range(n,11*n,n)
for num in t:
    print(num)
'''
#Armstrong number under 1000
'''
for n in range(1000):
    a=0
    c=0
    t=n
    while n!=0:
        a=n%10
        c=c+a**3
        n//=10
    if t==c:
        print(c)
'''
#Print square of all numbers betn a and b
'''
a=int(input("Enter a"))
b=int(input("Enter b"))
for num in range(a,b+1):
    print(num**2)
'''
#To find HCF
a=int(input("Enter Smaller Number"))
b=int(input("Enter Bigger Number"))
for i in range(1,a+1,1):
    if a%i==0:
        if b%i==0:
            c=i
            d=(a*b)/c
print("HCF is %d"%c)
print("LCM is %d"%d)
