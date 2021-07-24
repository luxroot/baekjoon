(a,b)=raw_input().split()
result = 0
for aa in a:
    for bb in b:
        result = result + int(aa)*int(bb)
print str(result)