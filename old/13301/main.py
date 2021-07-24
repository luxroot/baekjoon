n=input()
a,b=1,0
for i in range(n+2):
    a,b=b,a+b
    
print str(2*b)