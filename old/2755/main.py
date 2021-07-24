a={"A+": 4.3, "A0": 4.0, "A-": 3.7, "B+": 3.3, "B0": 3.0, "B-": 2.7, "C+": 2.3, "C0": 2.0, "C-": 1.7, "D+": 1.3, "D0": 1.0, "D-": 0.7, "F":"0.0"}
n=input()
sum=0
cnt=0
for _ in range(n):
    b=raw_input().split()
    sum+=float(a[b[2]])*int(b[1])
    cnt+=int(b[1])
print "{0:0.2f}".format(float(sum)/cnt+0.001)