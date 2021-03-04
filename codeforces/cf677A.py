n,h = tuple(int(x) for x in input("").split(" "))
a = list(int(x) for x in input("").split(" "))
bend_counter = 0

for i in a:
    if i > h:
        bend_counter += 2
    else:
        bend_counter += 1

print(bend_counter)