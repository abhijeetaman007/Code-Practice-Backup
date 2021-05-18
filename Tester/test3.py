s = input().split(' ')
no_assignments = s[0]
bed_time = s[1]

time=0
time1=0
for i in range(1,int(no_assignments)+1):
    time += i*5;

print(time)    
if(time<=(240-int(bed_time))):
    print(i)
elif(time>240-int(bed_time)):
    for j in range(1,int(no_assignments)+1):
        time1 += j*5
        print("j is ",j)
        print(time1)
        if(time1>=240-int(bed_time)):
            break
    print(j-1);