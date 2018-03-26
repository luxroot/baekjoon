n=input()
for i in range(n):
    a=raw_input()
    already=[]
    for b in a:
        if b not in already:
            already.append(b)
    print len(already)
