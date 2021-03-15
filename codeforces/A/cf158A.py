n,k=tuple(map(int,input("").split(" ")))
a=list(map(int,input("").split(" ")))
res=0
if (a[k-1]>=1):
    for i in range(0,n):
        if (a[i]>=a[k-1]):
            res+=1
print(res)
