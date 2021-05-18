x=45
print(x)        #print in decimal by default
x=101
print(x)        #print in decimal by default
x=0b101         #Number is in binary
print(x)        #By default output in decimal
print(bin(x))   #Number printed in binary
x=0o10          #Number taken in Octal
print(x)        #By default output in decimal
print(oct(x))   #Number printed in Octal
x=0x3f          #Number taken in hexadeciaml
print(x)        #By default output in decimal
print(hex(x))   #Number printed in hexadeciaml

#Concept of slicing can be used to remove prefix like 0b,0x,0o
x=bin(5)
print(x)
print(x[2::])    #Slicing is used
