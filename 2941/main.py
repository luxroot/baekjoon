a=raw_input()
l=len(a)
l-=a.count('c=')
l-=a.count('c-')
l-=a.count('dj=')
l-=a.count('d-')
l-=a.count('lj')
l-=a.count('nj')
l-=a.count('s=')
l-=a.count('z=')
print l