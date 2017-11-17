inp = raw_input()
# inp = '000000 00'
inp = inp.split()
a = inp[0]
b = inp[1]
l = max(len(a), len(b))
a = a.rjust(l,'0')
b = b.rjust(l,'0')
flag = 0
result = ''
for i in range(l)[::-1]:
	aa = int(a[i])
	bb = int(b[i])
	result = str(aa^bb^flag) + result
	flag = (flag + aa + bb) >= 2
if flag:
	result = '1'+result
while True:
	if result == '0':
		break;
	if result[0] == '0':
		result = result[1:]
	else:
		break

if result == '':
	print '0'
	exit()

print result