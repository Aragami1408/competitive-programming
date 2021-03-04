a = tuple(int(x) for x in input("").split(" "))
s = input("")

result = 0

for c in s:
    result += a[int(c) - 1]

print (result)