from pprint import pprint
dt ={}

def updateDict(keys:str, num:int):
    global dt
    for key in keys:
        # print(key,num)
        dt.update({key:num})

if __name__=="__main__":
    updateDict('ABC',2)
    updateDict('DEF',3)
    updateDict('GHI',4)
    updateDict('JKL',5)
    updateDict('MNO',6)
    updateDict('PQRS',7)
    updateDict('TUV',8)
    updateDict('WXYZ',9)
    inp = input()
    sum=0
    for letter in inp:
        sum+=dt[letter]
    sum+=len(inp)
    print(sum)