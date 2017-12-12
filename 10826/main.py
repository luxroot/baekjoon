n=input()
a,b=1,0
for i in range(n):
    a,b=b,a+b
    
print str(b)