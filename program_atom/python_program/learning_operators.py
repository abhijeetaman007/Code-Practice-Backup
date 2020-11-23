print(2**128)
print(2+3.0)
print(2*3.0)
print(2%3.0)
print(4/3.0)
print(4//3.0)
print("abc"+"def")
print(3*"abc")
print("bcd"*3)
#print("ab"*"cd")    #Error Line program terminates after error line
#Relational operators
print(3>2)         #Returns true or false
print(3<2)
print(3>=2)
print(int(3<2))    #Returns 0 or 1 when type casted
print(int(3>2))
print(bool(5))
print(bool(0))
print(int(True))
print(int(False))
print(bool(-1))       #Except Zero all number in Boolean means True
print(bool(1.2))      #Even floating point values return True
print(bool(0.0))      #floating point Zero will return False
print("ab">"cd")      #Relational operators can be used with strings as well
print("ab"=="cd")
print("ab">"AB")
print(True+5)
print(55>5.5)
#print('a'==97)        #in Pyhton implicit conversion does not takes place hence we get false as data types not same
print(ord('a')==97)
