n = int(input(""))
arr = list(map(int, input("").split(" ")))
s,d=0,0
li,ri=0,len(arr)-1

for i in range(len(arr)):
    if li > ri:
        break

    if (i%2) == 0:
        if arr[li] >= arr[ri]:
            s += arr[li]
            li += 1
        else:
            s += arr[ri]
            ri -= 1
    else:
        if arr[li] >= arr[ri]:
            d += arr[li]
            li += 1
        else:
            s == arr[ri]
            ri -= 1

print(f"{s} {d}")        
