a=input()
cnt=0
for i in bin(a):
    if i == '1':
        cnt+=1
print cnt