colors=[]
for _ in range(3):
    a=raw_input()
    colors.append(a)
dict = {"black":0,"brown":1,"red":2,"orange":3,"yellow":4,"green":5,"blue":6,"violet":7,"grey":8,"white":9}
result = 10*(dict[colors[0]]) + (dict[colors[1]])
result = result * (10**dict[colors[2]])
print result
