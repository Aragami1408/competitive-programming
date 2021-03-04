n = int(input(""))
s = input("")

a = 0
d = 0
for c in s:
    if c == 'A':
        a += 1
    elif c == 'D':
        d += 1

if a > d:
    print("Anton")
elif a < d:
    print("Danik")
else:
    print("Friendship")