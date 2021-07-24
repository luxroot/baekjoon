import datetime

a = raw_input()
b = a.split()
c = int(b[0])
d = int(b[1])

def getDayName(c,d):
    dayString = ["MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"]
    return dayString[datetime.date(2007, c, d).weekday()]

print getDayName(c,d)