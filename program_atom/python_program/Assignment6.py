#sort,GreatestNumber,sum
'''
l=[4,2,3,1]
l.sort()
print(l)
l.reverse()
print(l)
print("Greatest Number",l[0])
s=0
for i in l:
    s+=i
print(s)
'''
#N prime Numbers
'''
l=[]
n=int(input("Enter Value of n"))
for num in range(2,n,1):
    for x in range(2,num,1):
        if num%x==0:
            break
    else:
        l.append(num)
print(l)
'''
#List of square Numbers
'''
l=[]
n=int(input("Enter Number"))
for i in range(n+1):
    l.append(i**2)
print(l)
'''
#Length of list
'''
l=[10,20,30,40]
x=len(l)
print(x)
'''
#index of occuerance of an element
'''
l=[10,20,30]
l=l*3
print(l)
list=[]
n=int(input("Enter Number"))
for i in range(len(l)):
    if n==l[i]:
        list.append(i)
print(list)
'''
#No. of distict  occuerance
'''
count=[]
e=[]
l=[10,20,30]
l=l*3+[40,50,60]
print(l)
i=0
for i in l:
    print(i)
for i in l:
    flag=0
    j=0
    while(j<len(e)):
        print("Inside While")
        print("j is ",j)
        print(i)
        print(l[j])
        if i==l[j]:
            print("Inside if")
            x=e.index(i)
            print(x)
            count[x]+=1
            flag=1
        j+=1
    if flag==0:
        count.append(1)
        e.append(i)
print(e)
print(count)
'''
