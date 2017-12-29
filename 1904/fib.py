n=input()
a,b=0,1
for i in range(n):
    a,b=b,(a+b)%15746

print str(b)