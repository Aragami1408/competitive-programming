a,b = tuple(int(x) for x in input("").split(" "))
y = 0

while a <= b:
    a *= 3
    b *= 2
    y += 1

print(y)