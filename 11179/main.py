a = int(raw_input())
a = str(bin(a))[2:]
a=''.join(reversed(a))
a = int(a,2)
print a