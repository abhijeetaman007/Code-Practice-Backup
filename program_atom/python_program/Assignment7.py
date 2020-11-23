'''
x=input('Enter String')
print(len(x))
count=0
for i in x:
    if i=='a'or i=='e'or i=='i'or i=='o' or i=='u':
        print(i)
        count+=1
print(count)
print(x[::-1])
print(x[len(x)::-1])
n=input("Enter char")
c=0
for i in x:
    if i==n:
        c+=1
print(c)
'''
#Finding substring
'''
s=input("Enter String")
sub=input("Enter substring to be found")
count=0
i=0
print(len(s))
print(len(sub))
while i<(len(s)-(len(s)%len(sub))):
    flag=0
    j=0
    t=i
    while j<len(sub):
        #print("string",s[t])
        #print(sub[j])
        if s[t]==sub[j]:
            print("Inside if")
            t+=1
            j+=1
            flag=1
        else:
            #print("break")
            flag=0
            break
    if flag==1:
        print(i)
        print("found")
        count+=1
    i+=1
print("Total no. of occuerance",count)
'''
#Palindrome Checker
'''
s=input("Enter String")
s1=s[::-1]
if s1==s:
    print("Palindrome")
else:
    print("Not a Palindrome")
'''
#removing duplicate char:
s=input("Enter String")
i=0
j=0
s1=''
while i<len(s):
    j=0
    flag=0
    while j<i:
        if s[i]==s[j]:
            flag=1
            break
        j+=1
    if flag==0:
        s1=s1+s[i]
    i+=1
print(s1)
