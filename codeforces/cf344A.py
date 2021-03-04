n = int(input(""))
arr = []
result = 0

for i in range(0,n):
    arr.append(input(""))

pivot = arr[0]

for j in range(0, len(arr)):
    if arr[j] != pivot:
        pivot = arr[j]
        result += 1
        
result += 1
print(result)