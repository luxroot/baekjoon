inp = raw_input()
# inp = '3 5 7'
inp = inp.split()
a = int(inp[0])
b = int(inp[1])
c = int(inp[2])
binb = bin(b)[2:]
l = len(binb)

table=[]
table.append(a%c)
for i in range(l):
	table.append((table[-1]*table[-1])%c)
res = 1
for i in range(l):
	if binb[i] == '1':
		res *= table[i]
		res %= c
print res
