def gcd(a,b):
    while b > 0:
        a, b = b, a % b
    return a

t = input()
for _ in xrange(t):
    a = map(int,raw_input().split())
    sum = 0
    for i in range(1,len(a),1):
        for j in range(i+1,len(a),1):
            sum+=gcd(a[i],a[j])
    print str(sum)
