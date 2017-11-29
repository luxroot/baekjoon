a=int(raw_input())
b=int(raw_input())
c=int(raw_input())
d=a*b*c
result=[0]*10
while True:
    if d == 0:
        break
    result[d%10] += 1;
    d /=10

for _ in result:
    print _