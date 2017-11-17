def f(a):
	result = 1
	for i in range(a):
		result *= (i+1)
	return result

def C(a,b):
	return f(a) / f(b) / f(a-b)

a = raw_input()
b = a.split()
c = int(b[0])
d = int(b[1])
print(C(c,d))