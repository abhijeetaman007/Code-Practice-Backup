x=input("Enter String")
j=0
y=input("Enter Sub-String")
i=0
while j<len(x):
    print(x[j:(j+len(y))])
    if x[j:(j+len(y))]==y:
            print(j)
            print("found")
            break
    j=j+1
