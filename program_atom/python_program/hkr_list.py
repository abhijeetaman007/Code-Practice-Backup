n = int(input())
list=[]
i=0
while i<n:
        s=input()
        if s[0:6]=="insert":
            x=s.split()
            i=int(x[1])
            e=int(x[2])
            list.insert(i,e)
            continue
        if s[0:6]=="remove":
            x=s.split()
            e=int(x[1])
            list.remove(e)
            continue
        if s[0:6]=="append":
            x=s.split()
            e=int(x[1])
            list.append(e)
            continue
        if s[0:5]=="print":
            print(list)
            continue
        if s[0:4]=="sort":
            list.sort()
            continue
        if s[0:3]=="pop":
            list.pop()
            continue
        if s[0:7]=="reverse":
            list.reverse()
            continue
