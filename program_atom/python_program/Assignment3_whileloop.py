'''
x=1
while x<=10:
    print(x)
    x+=1
x=10
while x!=0:
    print(x)
    x-=1
x=0
while x<=10:
    if x&1:
        print(x)
    x+=1
x=0
while x<=10:
    if (x&1)!=1:
        print(x)
    x+=1
x=1
n=int(input("Enter value of n"))
while x<=n:
    print(x)
    x+=1
'''
'''
n=int(input("Enter n"))
while n>=1:
    print(n)
    n-=1
'''
'''
x=1
sum=0
n=int(input("Enter n"))
while x<=n:
    sum+=x
    x+=1
print(sum)
'''
'''
sum=0
x=1
n=int(input("Enter n"))
while x<=n:
    if (x%2!=0):
        sum+=x
    x+=1
print(sum)
'''
'''
fact=1
n=int(input("Enter number"))
while n!=1:
    fact=fact*n
    n-=1
print(fact)
'''
'''
prod=1
x=1
n=int(input("Enter Number"))
while x<=n:
    if x&1:
        prod*=x
    x+=1
print(prod)
'''
