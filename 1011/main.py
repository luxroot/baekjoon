n=input()
for _ in range(n):
    (a,b)=map(int,raw_input().split())
    # if b-a<3: print b-a;continue
    i=1
    sum=1
    while(True):
        sum+=i/2
        i=i+1
        if b-a < sum:
            print i-2
            break