import sys
a = []
for line in sys.stdin:
    a=a+list(line.strip())
print(sum(map(int,"".join(a).split(','))))