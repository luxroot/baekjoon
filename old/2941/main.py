a=raw_input()
l=len(a)
l-=a.count('c=')
l-=a.count('c-')
l-=(a.count('z=')-a.count('dz='))
l-=(a.count('dz='))*2
l-=a.count('d-')
l-=a.count('lj')
l-=a.count('nj')
l-=a.count('s=')
print l