#Finding average of tuple
'''
t=eval(input())
s=0
c=0
for i in t:
    s+=i
    c+=1
print("Average is",(s/c))
'''
#sort a tuple||Merge two sorted tuple:
'''
t1=eval(input())
t1=sorted(t1)
print(t1)
t2=eval(input())
t2=sorted(t2)
print(t2)
t=tuple(t1+t2)
print(t)
'''
#Reverse a tuple: //use splicing operator
'''
t=eval(input())
print(t[::-1])
print(t)
'''
#count element in tuple
'''
t=eval(input())
print(len(t))
#n=int(input("Enter an element"))
#print(t.count(n))
s=0
for i in t:
    s+=i
print(s)
'''
#******creating homogenous tuple from hetrogenous tuple*****
'''
t1,t2,t3,t4,t5=[],[],[],[],[]
t=eval(input())
for i in t:
    if type(i)==int:
        t1.append(i)
    if type(i)==float:
        t2.append(i)
    if type(i)==complex:
        t3.append(i)
    if type(i)==str:
        t4.append(i)
    if type(i)==bool:
        t5.append(i)
t1=tuple(t1)
t2=tuple(t2)
t3=tuple(t3)
t4=tuple(t4)
t5=tuple(t5)
print(t1,t2,t3,t4,t5,sep='\n')
'''
#greatest in tuple
'''
t=eval(input())
print(max(t))
'''
#use of eval function
'''
n=eval(input("Enter Number"))
print(n)
print(type(n))
'''
#to check whether tuple contains same element in same order:
'''
t1=eval(input("Enter numbers"))
t2=eval(input("Enter numbers"))
if t1==t2:
    print("same order and same element")
else:
    t1=sorted(t1)
    t2=sorted(t2)
    if t1==t2:
        print("Same element but not same order")
    else:
        print("Not same element")
'''
#Whether tuple is subset or not//convert in set using set() and check
'''
t1=eval(input("Enter numbers"))
t2=eval(input("Enter numbers"))
set1=set(t1)
set2=set(t2)
print(set1)
print(set2)
x=set2.issubset(set1)
print(x)
'''
