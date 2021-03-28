n,k=tuple(map(int,input("").split(" ")))
pan="abcdefghijklmnopqrstuvwxyz"
res=""
while len(res)<n:
    res+=pan[0:k]      

print(res[0:n])